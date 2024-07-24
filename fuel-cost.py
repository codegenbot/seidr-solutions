```
def fuel_cost(lst):
    return sum(max(0, i // 3 - 2) for i in lst)