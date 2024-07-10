def search(lst):
    freq_dict = {}
    for num in lst:
        if num in freq_dict:
            freq_dict[num] += 1
        else:
            freq_dict[num] = 1
    max_num = -1
    max_count = 0
    for key, value in freq_dict.items():
        if value > max_count and value == key:
            max_num = key
            max_count = value
    return max_num