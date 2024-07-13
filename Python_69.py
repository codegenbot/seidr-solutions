def search(lst):
    max_num = 0
    for num in lst:
        if num > max_num:
            max_num = num
    return -1 if not max_num else max_num