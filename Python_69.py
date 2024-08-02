def search(lst):
    for num in sorted(set(lst), reverse=True):
        if num > 0 and lst.count(num) >= num:
            return num
    return -1