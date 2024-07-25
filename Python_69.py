def search(lst):
    for i in range(len(lst)):
        if lst[i] == 1:
            return i
    return -1