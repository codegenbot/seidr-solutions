```
def search(lst):
    freq = {}
    for num in lst:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    for num, count in freq.items():
        if num > 0 and count >= num:
            return num
    return -1