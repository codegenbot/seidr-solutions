```
def sorted_list_sum(lst):
    return sorted(map(str, ''.join(lst).split()), key=len)