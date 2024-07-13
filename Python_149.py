```
def sorted_list_sum(lst):
    lst = list(map(int, lst.split()))
    return sum(sorted(lst))