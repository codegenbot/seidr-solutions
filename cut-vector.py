def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum = total_sum - left_sum
        if left_sum == right_sum or abs(left_sum - right_sum) < abs(
            (left_sum - vector[i]) - (right_sum + vector[i])
        ):
            return vector[: i + 1], vector[i + 1 :]


# Read input from user
vector = list(map(int, input().split()))

# Call the function and print the output
result = cut_vector(vector)
for subvector in result:
    print(" ".join(map(str, subvector)))