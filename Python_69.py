```
def search(lst):
    count_dict = {}
    for num in lst:
        if num not in count_dict:
            count_dict[num] = 0
        count_dict[num] += 1
    for k, v in count_dict.items():
        if k > 0 and v >= k:
            return k
    return -1