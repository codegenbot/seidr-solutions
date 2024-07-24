def search(lst):
    freq_dict = {}
    for num in lst:
        freq_dict[num] = freq_dict.get(num, 0) + 1
    for key, value in freq_dict.items():
        if key > 0 and value >= key:
            return key
    return -1