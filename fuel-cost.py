def fuel_cost(vector):
    return sum(calculate_fuel(i) for i in vector)

def calculate_fuel(amount):
    if amount <= 2:
        return max(0, amount - 2)
    else:
        return 1 + calculate_fuel(math.floor(amount / 3))