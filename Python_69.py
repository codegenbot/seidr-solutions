def search(lst):
    unique_nums = set(lst)
    for num in sorted(unique_nums, reverse=True):
        if num > 0 and lst.count(num) >= num:
            return num
    return -1