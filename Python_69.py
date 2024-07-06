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
    for key, value in frequency.items():
        if key >= value and key > 0 and key > max_num:
            max_num = key
    return max_num if max_num != -1 else -1