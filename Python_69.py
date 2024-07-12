```
def search(lst):
    freq_dict = {}
    for num in lst:
        if num > 0:
            freq_dict[num] = freq_dict.get(num, 0) + 1
    max_num = -1
    for num, freq in freq_dict.items():
        if freq >= num and num > 0:
            max_num = num
            break
    return max_num