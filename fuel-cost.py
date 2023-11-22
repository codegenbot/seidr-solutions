def fuel_cost(numbers):
    return sum([int(n/3) - 2 for n in numbers])