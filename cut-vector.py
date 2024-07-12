def cut_vector(vector):
    total_sum = sum(vector)

    left_sum = 0
    right_sum = total_sum
    min_diff = float("inf")
    cut_index = -1

    for i in range(len(vector) - 1):
        left_sum += vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)

        if diff == 0 or diff < min_diff:
            min_diff = diff
            cut_index = i

    return vector[: cut_index + 1], vector[cut_index + 1 :]


# Read input vector from the user
input_vector = list(map(int, input().split()))

# Get the two resulting subvectors
subvector1, subvector2 = cut_vector(input_vector)

# Print the two subvectors
print(subvector1)
print(subvector2)