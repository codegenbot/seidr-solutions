```
def sorted_list_sum(lst):
    return sum(sorted(map(lambda x: int(''.join(x.split())), lst)))