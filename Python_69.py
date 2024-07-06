```
def search(lst):
    freq = {}
    for num in lst:
        if num > 0:
            freq[num] = freq.get(num, 0) + 1
    max_num = -1
    for k, v in freq.items():
        if v >= k and k > 0:
            max_num = k
    return max_num