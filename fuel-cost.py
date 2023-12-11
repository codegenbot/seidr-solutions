def fuel_cost(numbers):
    return sum([int((n - 2) / 3) for n in numbers])