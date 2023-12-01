def cut_vector(vector):
    prefix_sum = [0] * (len(vector) + 1)
    for i in range(len(vector)):
        prefix_sum[i + 1] = prefix_sum[i] + vector[i]

    total_sum = prefix_sum[-1]
    min_difference = float("inf")
    cut_index = -1

    for i in range(1, len(vector)):
        left_sum = prefix_sum[i]
        right_sum = total_sum - prefix_sum[i]
        difference = abs(left_sum - right_sum)

        if difference < min_difference:
            min_difference = difference
            cut_index = i

    return vector[:cut_index], vector[cut_index:]


# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

# Call the function and print the result
left_subvector, right_subvector = cut_vector(vector)
for num in left_subvector:
    print(num)
for num in right_subvector:
    print(num)