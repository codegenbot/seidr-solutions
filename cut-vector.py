def cut_vector(lst):
    if len(lst) == 1:
        return [lst], []

    diff = float("inf")
    cut_index = -1

    for i in range(1, len(lst)):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])

        if abs(left_sum - right_sum) < diff:
            diff = abs(left_sum - right_sum)
            cut_index = i

    return lst[:cut_index], lst[cut_index:]