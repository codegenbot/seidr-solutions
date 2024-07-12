def cut_vector(lst):
    sorted_lst = sorted(lst)
    min_diff = float("inf")
    split_idx = 0

    for i in range(1, len(sorted_lst)):
        diff = abs(sum(sorted_lst[:i]) - sum(sorted_lst[i:]))
        if diff < min_diff:
            min_diff = diff
            split_idx = i

    return sorted_lst[:split_idx], sorted_lst[split_idx:]