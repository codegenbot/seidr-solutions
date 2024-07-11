```
def search(lst):
    frequency = {}
    for num in lst:
        if num in frequency:
            frequency[num] += 1
        else:
            frequency[num] = 1
    for num, count in frequency.items():
        if num > 0 and count >= num:
            return num
    return -1