```
def search(lst):
    frequency_dict = {}
    for num in lst:
        if num in frequency_dict:
            frequency_dict[num] += 1
        else:
            frequency_dict[num] = 1
    
    max_frequency = max(frequency_dict.values())
    
    for key, value in frequency_dict.items():
        if value >= key and value == max_frequency:
            return key
    return -1