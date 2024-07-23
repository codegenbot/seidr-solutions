```
def sorted_list_sum(lst):
    return sum(sorted([i for i in lst if len(i) % 2 == 0]))