def search(lst):
    freq_dict = {}
    for num in lst:
        if num in freq_dict:
            freq_dict[num] += 1
        else:
            freq_dict[num] = 1
    max_num = -1
    max_count = 0
    for k, v in freq_dict.items():
        if k > 0 and v >= max_count:
            max_num = k
            max_count = v
    return max_num