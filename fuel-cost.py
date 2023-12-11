def fuel_cost(numbers):
    return sum([(n-2)//3 for n in numbers])