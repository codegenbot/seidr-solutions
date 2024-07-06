```
def search(lst):
    freq_dict = {}
    for num in lst:
        if num in freq_dict:
            freq_dict[num] += 1
        else:
            freq_dict[num] = 1
    max_val = -1
    for k, v in freq_dict.items():
        if k > 0 and v >= k:
            max_val = k
    return max_val