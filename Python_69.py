```
def search(lst):
    freq_dict = {}
    for num in lst:
        if num > 0:
            if num in freq_dict:
                freq_dict[num] += 1
            else:
                freq_dict[num] = 1
    
    max_num = -1
    single_occurrence = False
    for key, value in freq_dict.items():
        if key >= value and key > 0:
            if value == 1:
                single_occurrence = True
                max_num = key
            elif key > max_num:
                max_num = key
    
    return -1 if not single_occurrence else max_num