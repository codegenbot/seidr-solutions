```
def search(lst):
    frequency = {}
    for num in lst:
        if num not in frequency:
            frequency[num] = 0
        frequency[num] += 1
    for num, count in frequency.items():
        if num > 0 and count >= num:
            return num
    return -1