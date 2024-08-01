```
def search(lst):
    for i in set(lst):
        if lst.count(i) >= i:
            return i
    return -1