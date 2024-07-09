def most_frequent(lst):
    freq_dict = {}
    for num in lst:
        if num > 0:
            if num in freq_dict:
                freq_dict[num] += 1
            else:
                freq_dict[num] = 1
    if not freq_dict:
        return -1
    max_num = max(freq_dict, key=freq_dict.get)
    return max_num