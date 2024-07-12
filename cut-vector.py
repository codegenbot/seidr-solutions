def cut_vector(input_vector):
    n = len(input_vector)
    diff = float("inf")
    left_sum = 0
    right_sum = sum(input_vector)

    for i in range(n - 1):
        left_sum += input_vector[i]
        right_sum -= input_vector[i]
        current_diff = abs(left_sum - right_sum)
        if current_diff <= diff:
            diff = current_diff
            left_subvector = input_vector[: i + 1]

    right_subvector = input_vector[len(left_subvector) :]

    return left_subvector, right_subvector


# Reading input vector from user
input_vector = list(map(int, input().split()))
left_subvector, right_subvector = cut_vector(input_vector)
print(left_subvector)
print(right_subvector)