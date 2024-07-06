```
def search(lst):
    frequency = {}
    for num in lst:
        if num in frequency:
            frequency[num] += 1
        else:
            frequency[num] = 1
    max_value = -1
    for key, value in frequency.items():
        if value >= key and key > 0:
            max_value = key
    return max_value