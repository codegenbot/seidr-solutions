def search(lst):
    for num in lst:
        if lst.count(num) >= num and num > 0:
            return num
    return -1