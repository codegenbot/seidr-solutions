def cut_vector(lst):
    min_diff = float("inf")
    min_diff_eq = float("inf")
    split_idx = 0

    for i in range(1, len(lst)):
        diff = abs(sum(lst[:i]) - sum(lst[i:]))
        
        if (sum(lst) % 2 == 0 and abs(sum(lst[:i]) - sum(lst[i:])) == 0) or \
           (diff < min_diff or (diff == min_diff and i < split_idx)):
            min_diff = diff
            min_diff_eq = 0 if sum(lst) % 2 == 0 else float("inf")
            split_idx = i

    return lst[:split_idx], lst[split_idx:]