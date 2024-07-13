```
def sorted_list_sum(lst):
    return sum(map(str, [i for sublist in (sorted(map(int, x.split())) for x in lst) for i in sublist]))