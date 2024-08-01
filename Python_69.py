```
def search(lst):
    count_dict = {}
    for num in lst:
        if num > 0:
            if num in count_dict:
                count_dict[num] += 1
            else:
                count_dict[num] = 1
    max_num = -1
    for key, value in count_dict.items():
        if key >= value and key > 0:
            max_num = key
            break
    return max_num