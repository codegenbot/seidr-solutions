def cut_vector(lst):
    n = len(lst)
    min_diff = float("inf")
    split_point = 0

    for i in range(1, n):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])

        if left_sum == right_sum:
            return (lst[:i], lst[i:]), "Equal"
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_point = i

    return ((lst[0], *lst[1:split_point]), (lst[split_point:], 0)), f"Diff={min_diff}"