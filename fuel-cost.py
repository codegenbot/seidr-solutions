def fuel_cost(numbers):
    return sum([math.ceil(n / 3) - 2 for n in numbers])