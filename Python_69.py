def search(lst):
    max_val = -1
    for num in set(lst):
        if lst.count(num) >= num:
            max_val = num
    return max_val