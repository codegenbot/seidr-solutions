def cut_vector(vector):
    sum_vector = sum(vector)
    left_sum = 0
    for i, num in enumerate(vector):
        left_sum += num
        right_sum = sum_vector - left_sum
        if left_sum == right_sum or abs(left_sum - right_sum) == 1:
            return vector[: i + 1], vector[i + 1 :]
    return vector, [0]


# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

# Call the function and print the results
left_subvector, right_subvector = cut_vector(vector)
for num in left_subvector:
    print(num)
for num in right_subvector:
    print(num)