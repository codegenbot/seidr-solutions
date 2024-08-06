def fuel_cost(*numbers):
    return sum((n // 3) - 2 for n in numbers)