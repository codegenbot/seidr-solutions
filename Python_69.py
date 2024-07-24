```
def search(lst):
    freq = {}
    for num in lst:
        if num > 0:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1
    max_freq = max(freq.values())
    for key, value in freq.items():
        if value >= key and value == max_freq:
            return key
    return -1