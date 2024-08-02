```
def sorted_list_sum(lst):
    return sorted([x for x in lst if len(x) % 2 == 0], key=lambda x: (len(x), x))