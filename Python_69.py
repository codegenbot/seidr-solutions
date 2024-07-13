def search(lst):
    max_num = -1
    for num in lst:
        if num > 0:
            max_num = num
        else:
            return -1
    return max_num if max_num != -1 else -1