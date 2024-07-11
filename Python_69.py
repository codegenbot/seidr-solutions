```
def search(lst):
    frequency_dict = {}
    for num in lst:
        if num in frequency_dict:
            frequency_dict[num] += 1
        else:
            frequency_dict[num] = 1
    
    for key in sorted(frequency_dict.keys(), reverse=True):
        if key >= frequency_dict[key]:
            return key
    return -1