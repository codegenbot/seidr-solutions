```
def search(lst):
    freq_dict = {}
    for num in lst:
        if num > 0:
            if num in freq_dict:
                freq_dict[num] += 1
            else:
                freq_dict[num] = 1
    max_val = -1
    for k, v in freq_dict.items():
        if v >= k and k > 0 and k > max_val:
            max_val = k
    return max_val