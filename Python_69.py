def find_max(lst):
    max_num = None
    for num in lst:
        if num > max_num:
            max_num = num
    return max_num