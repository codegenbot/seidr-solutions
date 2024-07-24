```
def sorted_list_sum(lst):
    return [str(i) for i in set(sorted(map(len, lst)))]