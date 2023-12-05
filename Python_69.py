def search(lst):
    max_freq = -1
    for i in lst:
        if lst.count(i) > max_freq and lst.count(i) >= i:
            max_freq = lst.count(i)
    return max_freq if max_freq != -1 else -1