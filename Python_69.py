```
def search(lst):
    frequency_dict = {}
    for num in lst:
        if num not in frequency_dict:
            frequency_dict[num] = 0
        frequency_dict[num] += 1
    
    max_num = -1
    for key in frequency_dict:
        if key > 0 and frequency_dict[key] >= key:
            max_num = key
            break
    
    return max_num