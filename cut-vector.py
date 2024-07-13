```
def cut_vector(lst):
    sorted_lst = sorted(lst)
    min_diff = float("inf")
    split_idx = 0
    for i in range(1, len(sorted_lst)):
        left_sum = sum(sorted_lst[:i])
        right_sum = sum(sorted_lst[i:])
        if left_sum == right_sum or abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_idx = i
    return sorted_lst[:split_idx], sorted_lst[split_idx:]