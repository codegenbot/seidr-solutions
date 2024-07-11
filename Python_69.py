```
def search(lst):
    frequency = {}
    for num in lst:
        if num > 0:
            if num in frequency:
                frequency[num] += 1
            else:
                frequency[num] = 1
    max_num = -1
    for num, count in frequency.items():
        if count >= num and num > 0:
            max_num = num
    return max_num