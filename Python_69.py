def search(lst):
    freq_dict = {}
    for num in lst:
        if num in freq_dict:
            freq_dict[num] += 1
        else:
            freq_dict[num] = 1
    max_num = -1
    for key, value in freq_dict.items():
        if key > 0 and value >= key:
            max_num = key
    return max_num