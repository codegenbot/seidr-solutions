```
def search(lst):
    freq_dict = {}
    for i in lst:
        if i in freq_dict:
            freq_dict[i] += 1
        else:
            freq_dict[i] = 1
    max_val = -1
    for k, v in freq_dict.items():
        if k > 0 and v >= k:
            max_val = k
    return max_val