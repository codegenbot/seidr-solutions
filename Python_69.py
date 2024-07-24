def search(lst):
    max_freq_num = None
    frequency_dict = {}
    for num in lst:
        if num > 0:
            if num in frequency_dict:
                frequency_dict[num] += 1
            else:
                frequency_dict[num] = 1
    for key, value in frequency_dict.items():
        if value == max(value.values()) and key > 0:
            max_freq_num = key
    return max_freq_num