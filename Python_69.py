```
def search(lst):
    pos_freq_dict = {}
    neg_freq_dict = {}
    for num in lst:
        if num > 0:
            if num in pos_freq_dict:
                pos_freq_dict[num] += 1
            else:
                pos_freq_dict[num] = 1
        elif num < 0:
            if num in neg_freq_dict:
                neg_freq_dict[num] -= 1
            else:
                neg_freq_dict[num] = -1
    max_pos_num = max((num for num, freq in pos_freq_dict.items() if freq == 1), default=0)
    return max_pos_num if max_pos_num > 0 else 0