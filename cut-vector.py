def cut_vector(vector):
    total_sum = sum(vector)
    min_diff = abs(total_sum)
    left_index = -1
    right_index = -1

    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        diff = abs((total_sum - current_sum) - current_sum)
        if diff <= min_diff:
            min_diff = diff
            left_index = i
            right_index = i

        if (total_sum - current_sum) == current_sum:
            right_index = i

    return vector[: left_index + 1], vector[right_index + 1 :]


vector = [int(num) for num in input().split()]

subvector1, subvector2 = cut_vector(vector)
print(*subvector1, sep="\n") if subvector1 else None
print(*subvector2, sep="\n")