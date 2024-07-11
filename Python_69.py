```
def search(lst):
    frequency = {}
    for num in lst:
        if num > 0:
            frequency[num] = frequency.get(num, 0) + 1
    max_num = -1
    for num, count in frequency.items():
        if count >= num and num > max_num:
            max_num = num
    return max_num