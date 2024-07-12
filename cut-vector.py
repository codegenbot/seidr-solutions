def cut_vector(lst):
    min_diff = float("inf")
    left_sum = sum(lst[:1])
    for i in range(1, len(lst)):
        right_sum = sum(lst[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
        left_sum += lst[i]
    return (lst[:min_diff+1], lst[min_diff+1:])