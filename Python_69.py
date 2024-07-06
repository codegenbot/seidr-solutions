```
def search(lst):
    freq_dict = {}
    for num in lst:
        if num in freq_dict:
            freq_dict[num] += 1
        else:
            freq_dict[num] = 1
    max_num = -1
    for k, v in freq_dict.items():
        if k > 0 and k >= v:
            max_num = k
    return max_num