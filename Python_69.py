```
def search(lst):
    freq = {}
    for num in lst:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    max_val = -1
    for key, value in freq.items():
        if key > 0 and value >= key:
            max_val = key
    return max_val