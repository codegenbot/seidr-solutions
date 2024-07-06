```
def search(lst):
    frequency = {}
    for num in lst:
        if num > 0:
            if num in frequency:
                frequency[num] += 1
            else:
                frequency[num] = 1
    max_freq = max(frequency.values())
    return next((num for num, freq in frequency.items() if freq >= num and num > 0), -1)