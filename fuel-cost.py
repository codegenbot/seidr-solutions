```
def calculate_fuel(amount):
    if amount <= 2:
        return max(0, amount - 2)
    else:
        result = math.floor(amount / 3) - 2
        return max(result, 0)

def fuel_cost(vector):
    return sum(calculate_fuel(i) for i in vector)