def fuel_cost(*args):
    return sum((arg // 3 - 2) for arg in args)