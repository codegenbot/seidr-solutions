```
def search(lst):
    freq_dict = {}
    for num in lst:
        if num > 0:
            if num in freq_dict:
                freq_dict[num] += 1
            else:
                freq_dict[num] = 1
    max_num = -1
    max_freq = 0
    for num, freq in freq_dict.items():
        if freq > max_freq and num > max_num:
            max_num = num
            max_freq = freq
    return max_num