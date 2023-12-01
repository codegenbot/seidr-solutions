def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    for i, num in enumerate(vector):
        left_sum += num
        right_sum = total_sum - left_sum
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

# Call the function and print the result
result = cut_vector(vector)
for subvector in result:
    print(*subvector)