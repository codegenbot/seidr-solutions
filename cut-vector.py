def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum - vector[0]
    min_diff = abs(left_sum - right_sum)
    min_diff_idx = 0

    for i in range(1, n):
        left_sum += vector[i - 1]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            min_diff_idx = i

    return vector[: min_diff_idx + 1], vector[min_diff_idx + 1 :]


vector = list(map(int, input().split()))

subvector1, subvector2 = cut_vector(vector)
print(*subvector1, sep='\n')
print()
print(*subvector2, sep='\n')