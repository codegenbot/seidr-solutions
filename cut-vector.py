Here is the completed code:

def cut_vector(lst):
    n = len(lst)
    min_diff = float('inf')
    split_idx = -1
    for i in range(1, n):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_idx = i
    return lst[:split_idx], lst[split_idx:]