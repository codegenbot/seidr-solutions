```
def sorted_list_sum(lst):
    lst = [s for s in lst if len(s) % 2 == 0]
    return sorted(set(lst), key=lambda x: (len(x), x))