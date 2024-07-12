```
def search(lst):
    frequency = {}
    for num in lst:
        if num in frequency:
            frequency[num] += 1
        else:
            frequency[num] = 1
    for k, v in frequency.items():
        if k > 0 and v >= k:
            return k
    return -1