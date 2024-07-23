```
def search(lst):
    max_val = 0
    i = 0
    while i < len(lst):
        count = 1
        while i + 1 < len(lst) and lst[i] == lst[i+1]:
            i += 1
            count += 1
        if count > max_val:
            max_val = count
        i += 1
    return max_val