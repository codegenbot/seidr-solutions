def cut_vector(lst):
    diff = float("inf")
    split_index = 0

    for i in range(1, len(lst)):
        curr_diff = abs(sum(lst[:i]) - sum(lst[i:]))

        if curr_diff < diff:
            diff = curr_diff
            split_index = i

    return lst[:split_index], lst[split_index:]