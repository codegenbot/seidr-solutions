```
def cut_vector(lst):
    min_diff = float("inf")
    cut_index = -1

    for i in range(1, len(lst)):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])

        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i

    return [lst[:cut_index+1], lst[cut_index+1:]]