```
def sorted_list_sum(lst):
    lst = list(map(int, ''.join(lst).split()))
    return sum(sorted(lst))