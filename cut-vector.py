```
def cut_vector(lst):
    min_diff = float('inf')
    cut_index = 0
    for i in range(1, len(lst)):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])
        if left_sum == right_sum:
            return [lst[:i], lst[i:]]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i
    left_sum = sum(lst[:cut_index])
    right_sum = sum(lst[cut_index:])
    if left_sum == right_sum:
        return [lst[:cut_index], lst[cut_index:]]
    else:
        return [lst[:cut_index], [cut_index], lst[cut_index:]]