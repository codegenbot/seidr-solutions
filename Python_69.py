```
def search(lst):
    freq_dict = {}
    for num in lst:
        if num > 0:
            if num in freq_dict:
                freq_dict[num] += 1
            else:
                freq_dict[num] = 1
    max_freq = -1
    for key, value in freq_dict.items():
        if value >= key and value > max_freq:
            max_freq = value
    return -1 if max_freq == -1 else list(freq_dict.keys())[list(freq_dict.values()).index(max_freq)]