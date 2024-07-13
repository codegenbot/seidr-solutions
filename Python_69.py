def search(lst):
    for num in lst:
        if num > 0:
            return max([i for i in lst if i > 0])
    return -1