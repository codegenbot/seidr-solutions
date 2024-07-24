```
def sorted_list_sum(lst):
    return sum(int(x) for x in sorted(map(str, lst)))