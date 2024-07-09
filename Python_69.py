def find_max_positive(lst):
    max_pos = -1
    for num in lst:
        if num > 0:
            if num > max_pos:
                max_pos = num
    return max_pos if max_pos != -1 else None