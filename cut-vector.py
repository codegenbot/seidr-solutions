def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    min_difference = float("inf")
    cut_index = 0

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum -= vector[i]
        difference = abs(left_sum - right_sum)

        if difference < min_difference:
            min_difference = difference
            cut_index = i + 1

    return vector[:cut_index], vector[cut_index:]


# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

# Call the function and print the output
subvector1, subvector2 = cut_vector(vector)
for num in subvector1:
    print(num)
for num in subvector2:
    print(num)