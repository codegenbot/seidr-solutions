def cut_vector(lst):
    if lst[0] == sum(lst[1:]):
        return [lst[0]], lst[1:]

    left_sum = 0
    right_sum = sum(lst)
    for i in range(len(lst) - 1):
        left_sum += lst[i]
        right_sum -= lst[i + 1]

        if left_sum == right_sum:
            return [i], lst[:i] + lst[i:]

    min_diff = float("inf")
    split_idx = 0

    for i in range(1, len(lst)):
        diff = abs(sum(lst[:i]) - sum(lst[i:]))

        if diff < min_diff:
            min_diff = diff
            split_idx = i

    return lst[:split_idx], lst[split_idx:]