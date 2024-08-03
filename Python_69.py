```
def search(lst):
    for num in set(lst):
        if lst.count(num) >= num:
            return num
    return -1