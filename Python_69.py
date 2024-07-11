```
def search(lst):
    frequency_dict = {}
    for num in lst:
        if num in frequency_dict:
            frequency_dict[num] += 1
        else:
            frequency_dict[num] = 1
    max_num = -1
    for num, freq in frequency_dict.items():
        if freq >= num and num > 0 and freq > max_num:
            max_num = freq
    return max_num if max_num > 0 else -1