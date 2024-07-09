def search(lst):
    freq_dict = {}
    for num in lst:
        if num > 0:
            if num in freq_dict:
                freq_dict[num] += 1
            else:
                freq_dict[num] = 1
    max_num = 0
    for key, value in freq_dict.items():
        if key == value:
            max_num = key
            break
    return max_num