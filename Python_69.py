def search(lst):
    frequency_dict = {}
    for num in lst:
        if num > 0:
            if num in frequency_dict:
                frequency_dict[num] += 1
            else:
                frequency_dict[num] = 1
    max_num = -1
    for num, freq in frequency_dict.items():
        if freq >= num and num > 0:
            max_num = num
    return max_num