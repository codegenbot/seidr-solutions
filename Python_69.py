def search(lst):
    return max([i for i in set(lst)], key=lst.count)