```python
def search(lst):
    """
    This function takes a list of numbers as input and returns the largest number that occurs at least once in the list.
    If no such number exists, it returns -1.
    """
    freq_dict = {}
    for num in lst:
        if num > 0:
            if num in freq_dict:
                freq_dict[num] += 1
            else:
                freq_dict[num] = 1
    max_num = -1
    for num, freq in freq_dict.items():
        if num >= freq and num > max_num:
            max_num = num
    return max_num