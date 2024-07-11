def search(lst):
    frequency = {}
    for num in lst:
        if num in frequency:
            frequency[num] += 1
        else:
            frequency[num] = 1
    max_num = -1
    for num, count in frequency.items():
        if num > 0 and count >= num:
            max_num = num
    return max_num