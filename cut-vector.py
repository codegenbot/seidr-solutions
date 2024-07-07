def cut_vector(lst):
    min_diff = float("inf")
    split_index = 0
    for i in range(1, len(lst)):
        left_avg = sum(lst[:i]) / (i)
        right_avg = sum(lst[i:]) / (len(lst) - i)
        diff = abs(left_avg - right_avg)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return lst[:split_index], lst[split_index:]