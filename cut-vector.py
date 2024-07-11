```
def cut_vector(lst):
    n = len(lst)
    min_diff = float("inf")
    split_index = 0

    for i in range(1, n):
        avg_left = sum(lst[:i]) / i
        avg_right = sum(lst[i:]) / (n - i)

        diff = abs(avg_left - avg_right)

        if diff < min_diff:
            min_diff = diff
            split_index = i

    return lst[:split_index], lst[split_index:]