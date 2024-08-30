```
def fuel_cost(lst):
    return sum((i - 2) // 3 for i in lst)