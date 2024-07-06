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
    for key, value in freq_dict.items():
        if key >= value and key > 0 and key > max_val:
            max_val = key
    return max_val