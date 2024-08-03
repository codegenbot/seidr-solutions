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
        if count >= num and num > 0 and count > max_num:
            max_num = count
    return max_num if max_num != -1 else -1