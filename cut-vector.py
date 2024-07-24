def cut_vector(lst):
    diff = float("inf")
    split_point = 0
    for i in range(1, len(lst)):
        new_diff = abs(sum(lst[:i]) - sum(lst[i:]))
        if new_diff < diff:
            diff = new_diff
            split_point = i
    return lst[:split_point], lst[split_point:]