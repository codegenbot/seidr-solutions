def cut_vector(lst):
    min_diff = float("inf")
    cut_index = -1

    for i in range(1, len(lst)):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])

        if left_sum == right_sum:
            return [lst[:i], lst[i:]]
        else:
            diff = abs(left_sum - right_sum)

            if diff < min_diff:
                min_diff = diff
                cut_index = i

    return [lst[: cut_index + 1], lst[cut_index + 1 :]]