def cut_vector(lst):
    left_sum = sum(lst[:i+1]) for i in range(len(lst)))
    min_diff = min(abs(left_sum[i] - sum(lst[i:]))
    return lst[:left_sum.index(min_diff)], [left_sum[0], 0] if not lst else [left_sum[0], lst[-1]]