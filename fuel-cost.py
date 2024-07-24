def fuel_cost(lst):
    return sum((i // 1 if i % 3 == 0 else (i - 1) // 3) - 2 for i in lst)