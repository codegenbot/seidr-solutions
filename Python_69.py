```
def search(lst):
    frequency = {}
    for num in lst:
        if num in frequency:
            frequency[num] += 1
        else:
            frequency[num] = 1
    max_num = -1
    for key, value in frequency.items():
        if key > 0 and value >= key:
            max_num = key
            break
    return max_num