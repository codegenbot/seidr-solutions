def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    min_diff = float("inf")
    cut_position = -1

    for i in range(n - 1):
        left_sum += vector[i]
        right_sum -= vector[i]

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_position = i + 1

    return vector[:cut_position], vector[cut_position:]


# Convert input string to list of integers
vector = list(map(int, input().split()))

# Call the function with input vector
left_subvector, right_subvector = cut_vector(vector)

# Print the output subvectors
print(*left_subvector)
print(*right_subvector)