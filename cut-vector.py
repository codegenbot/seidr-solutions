def cut_vector(lst):
    min_diff = float("inf")
    cut_index = 0

    for i in range(1, len(lst)):
        diff = abs(sum(lst[:i]) - sum(lst[i:]))

        if diff < min_diff:
            min_diff = diff
            cut_index = i
        elif (diff == min_diff and (sum(lst[:i]) >= sum(lst[i:]) or i > 0)) or diff < min_diff:
            min_diff = diff
            cut_index = i

    return lst[:cut_index], lst[cut_index:]