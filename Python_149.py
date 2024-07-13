```
def sorted_list_sum(lst):
    lst = list(map(int, ''.join(str(x) for x in lst).split()))
    return sum(sorted(lst))