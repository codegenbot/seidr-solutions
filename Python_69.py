```
def search(lst):
    freq_dict = {}
    for num in lst:
        if num not in freq_dict:
            freq_dict[num] = 0
        freq_dict[num] += 1
    for k, v in freq_dict.items():
        if k > 0 and v >= k:
            return k
    return -1