def search(lst):
    return max([i for i in lst if lst.count(i) >= i], default=-1)