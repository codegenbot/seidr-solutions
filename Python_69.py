```
def search(lst):
    frequency_dict = {}
    for i in lst:
        if i in frequency_dict:
            frequency_dict[i] += 1
        else:
            frequency_dict[i] = 1
    for num, freq in frequency_dict.items():
        if num > 0 and freq >= num:
            return num
    return -1