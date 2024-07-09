def search(lst):
    max_num = -1
    for num in lst:
        if num > 0 and (max_num < num or lst.count(num) > 1):
            max_num = num
    return max_num