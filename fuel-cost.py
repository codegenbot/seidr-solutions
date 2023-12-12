def fuel_cost(numbers):
    return sum([math.floor(n / 3) - 2 for n in numbers])