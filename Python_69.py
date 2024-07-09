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
    for key, value in freq_dict.items():
        if key >= value and key > 0:
            if value > max_freq:
                max_num = key
                max_freq = value
    return max_num