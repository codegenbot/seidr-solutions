def search(lst):
    frequency = {}
    for num in lst:
        if num in frequency:
            frequency[num] += 1
        else:
            frequency[num] = 1
    result = -1
    for num, freq in frequency.items():
        if num > 0 and freq >= num:
            result = max(result, num)
    return result