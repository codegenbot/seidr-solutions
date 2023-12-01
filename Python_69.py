def search(lst):
    return max([num for num in set(lst) if lst.count(num) >= num] or [-1])