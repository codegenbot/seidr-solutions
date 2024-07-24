```
def search(lst):
    from collections import Counter
    count = Counter(lst)
    for num in range(1, max(count) + 1):
        if count[num] >= num:
            return num
    return -1