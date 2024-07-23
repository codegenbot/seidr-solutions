```
def cut_vector(lst):
    min_diff = float("inf")
    cut_index = 0

    for i in range(1, len(lst)):
        sum_left = sum(lst[:i])
        sum_right = sum(lst[i:])
        diff = abs(sum_left - sum_right)

        if (sum_left == sum_right or diff < min_diff) and (i == 1 or i == len(lst)-1) or (diff == min_diff and i > 0):
            min_diff = diff
            cut_index = i

    return lst[:cut_index], lst[cut_index:]