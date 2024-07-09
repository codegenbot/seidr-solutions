def find_largest_positive(lst):
    max_num = None
    for num in lst:
        if num > 0 and (max_num is None or num > max_num):
            max_num = num
    return max_num