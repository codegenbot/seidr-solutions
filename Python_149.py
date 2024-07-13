```
def sorted_list_sum(lst):
    return sorted([sum(int(c) for c in s if c.isdigit()) for s in lst])