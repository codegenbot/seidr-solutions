def search(lst):
    max_num = 0
    for num in lst:
        if num > max_num and num > 0:
            max_num = num
    return max_num or 0