```
def cut_vector(lst):
    if len(set(lst)) == 1:
        return [lst], []

    min_diff = float("inf")
    split_idx = 0

    for i in range(len(lst)):
        left_sum = sum(lst[:i+1])
        right_sum = sum(lst[i+1:])

        diff = abs(left_sum - right_sum)

        if left_sum == right_sum and i > 0 or (diff < min_diff):
            min_diff = diff
            split_idx = i

    return lst[:split_idx+1], lst[split_idx+1:]