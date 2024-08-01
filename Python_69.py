```
def search(lst):
    freq = {}
    for num in lst:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    for num in freq:
        if num > 0 and freq[num] >= num:
            return num
    return -1