def cut_vector(vector):
    length = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum

    min_diff = float("inf")
    cut_index = -1

    for i in range(length):
        left_sum += vector[i]
        right_sum -= vector[i]

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return vector[: cut_index + 1], vector[cut_index + 1 :]

vector = list(map(int, input().split()))
left_subvector, right_subvector = cut_vector(vector)
print(*left_subvector, sep="\n")
print(*right_subvector, sep="\n")