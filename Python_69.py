def search(lst):
    frequency = {}
    for num in lst:
        if num not in frequency:
            frequency[num] = 0
        frequency[num] += 1
    for num in frequency:
        if num > 0 and frequency[num] >= num:
            return num
    return -1