def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    min_diff = float("inf")
    cut_index = -1

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return vector[: cut_index + 1], vector[cut_index + 1 :]


# Reading input vector from the user
vector = list(map(int, input().split()))

# Calling the function and printing the output
left_subvector, right_subvector = cut_vector(vector)
print(*left_subvector)
print(*right_subvector)