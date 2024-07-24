```
def search(lst):
    frequency_dict = {}
    for num in lst:
        if num > 0:
            if num in frequency_dict:
                frequency_dict[num] += 1
            else:
                frequency_dict[num] = 1
    max_value = -1
    for key, value in frequency_dict.items():
        if value >= key and key > 0:
            max_value = key
    return max_value