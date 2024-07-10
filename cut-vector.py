def cut_vector(lst):
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(lst)):
        diff = abs(sum(lst[:i]) - sum(lst[i:]))

        if diff < min_diff:
            min_diff = diff
            split_index = i

    return lst[:split_index], lst[split_index:]