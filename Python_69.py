```
def search(lst):
    frequency_dict = {}
    for num in lst:
        if num in frequency_dict:
            frequency_dict[num] += 1
        else:
            frequency_dict[num] = 1
    max_num = -1
    for key, value in frequency_dict.items():
        if value > max_num and value > 0:
            max_num = value
    return max_num if max_num > 0 else -1