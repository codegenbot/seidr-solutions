```
def search(lst):
    freq = {}
    for num in lst:
        if num > 0:
            freq[num] = freq.get(num, 0) + 1
    max_freq = max(freq.values())
    for num, count in freq.items():
        if count >= num and count == max_freq:
            return num
    return -1