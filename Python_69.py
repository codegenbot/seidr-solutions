def search(lst):
    freq_dict = {}
    for num in lst:
        if num > 0:
            if num in freq_dict:
                freq_dict[num] += 1
            else:
                freq_dict[num] = 1
    max_num = -1
    for key, value in freq_dict.items():
        if key >= value and key > 0 and key > max_num:
            max_num = key
    return max_num