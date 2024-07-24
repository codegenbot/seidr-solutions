```
def sorted_list_sum(lst):
    return sum(int(i) for i in str(sorted(map(str, lst))))