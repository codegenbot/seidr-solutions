```
def search(lst):
    freq_dict = {}
    for num in lst:
        if num > 0:
            if num in freq_dict:
                freq_dict[num] += 1
            else:
                freq_dict[num] = 1
    max_num = -1
    for k, v in freq_dict.items():
        if k >= v and k > 0 and k > max_num:
            max_num = k
    return max_num if max_num != -1 else -1