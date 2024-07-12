```
def search(lst):
    freq_dict = {}
    for i in lst:
        if i in freq_dict:
            freq_dict[i] += 1
        else:
            freq_dict[i] = 1
    max_val = -1
    for key, val in freq_dict.items():
        if val >= key and key > 0 and val > max_val:
            max_val = val
    return max_val if max_val > 0 else -1