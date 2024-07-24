```
def sorted_list_sum(lst):
    return ' '.join(sorted([''.join(i) for i in set(map(str, map(list, lst)))], key=len))