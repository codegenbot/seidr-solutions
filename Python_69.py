def search(lst):
    freq_dict = {}
    for i in lst:
        if i in freq_dict:
            freq_dict[i] += 1
        else:
            freq_dict[i] = 1
    max_value = -1
    for key, value in freq_dict.items():
        if value >= key and key > 0:
            max_value = key
    return max_value