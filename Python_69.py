```
def search(lst):
    freq = {}
    for num in lst:
        if num > 0:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1
    for num, count in freq.items():
        if count >= num and num > 0:
            return num
    return -1