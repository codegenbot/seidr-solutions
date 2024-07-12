```
def cut_vector(lst):
    min_diff = float("inf")
    split_idx = 0

    for i in range(1, len(lst)):
        if sum(lst[:i]) == sum(lst[i:]):
            return lst[:i], lst[i:]
        elif abs(sum(lst[:i]) - sum(lst[i:])) < min_diff:
            min_diff = abs(sum(lst[:i]) - sum(lst[i:]))
            split_idx = i

    return lst[:split_idx], lst[split_idx:]