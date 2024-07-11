```
def cut_vector(lst):
    n = len(lst)
    min_diff = float("inf")
    split_index = 0

    for i in range(1, n):
        diff = abs(sum(lst[:i]) - sum(lst[i:]))

        if diff < min_diff:
            min_diff = diff
            split_index = (i + lst[i]) // 2

    return lst[:split_index], lst[split_index:]