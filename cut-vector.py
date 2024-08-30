```
def cut_vector(lst):
    min_diff = float("inf")
    split_index = -1

    for i in range(1, len(lst)):
        if i == 1:
            left_sum = lst[0]
        else:
            left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])

        diff = abs(left_sum - right_sum)

        if (left_sum == right_sum or diff < min_diff):
            min_diff = diff
            split_index = i

    return (lst[:split_index], lst[split_index:])