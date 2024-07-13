Here is the Python solution for the problem:

def fuel_cost(lst):
    return sum((num // 3) - 2 for num in lst)