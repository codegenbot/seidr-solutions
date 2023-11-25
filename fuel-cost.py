def fuel_cost(numbers):
    return sum([int(num/3) - 2 for num in numbers])