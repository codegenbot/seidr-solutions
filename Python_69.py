```
def search(lst):
    freq_dict = {}
    for num in lst:
        if num not in freq_dict:
            freq_dict[num] = 0
        freq_dict[num] += 1
    for key in freq_dict:
        if key > 0 and freq_dict[key] >= key:
            return key
    return -1