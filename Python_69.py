```
def search(lst):
    freq = {}
    for num in lst:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    max_num = -1
    for num, count in freq.items():
        if count >= num and num > 0:
            max_num = num
    return max_num