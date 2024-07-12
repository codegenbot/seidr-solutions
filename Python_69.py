```
def search(lst):
    freq = {}
    for num in lst:
        if num > 0:
            freq[num] = freq.get(num, 0) + 1
    max_num = -1
    for num, count in freq.items():
        if num > 0 and count >= num:
            max_num = num
            break
    return max_num