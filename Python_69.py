def search(lst):
    max_num = -1
    for num in set(lst):
        if lst.count(num) >= num:
            max_num = num
    return max_num