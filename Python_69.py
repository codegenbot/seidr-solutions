```
def search(lst):
    frequency_dict = {}
    for i in lst:
        if i in frequency_dict:
            frequency_dict[i] += 1
        else:
            frequency_dict[i] = 1
    max_value = -1
    for k, v in frequency_dict.items():
        if k > 0 and v >= k:
            max_value = k
            break
    return max_value