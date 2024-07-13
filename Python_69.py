```Python
def search(lst):
    for num in lst:
        if num > 0:
            return max((num for num in lst if num > 0), default=-1)
    return -1