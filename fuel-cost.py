def fuel_cost(vector):
    return sum(calculate_fuel(i) for i in vector)

def calculate_fuel(amount):
    total = 0
    while True:
        amount_divided = math.floor(amount / 3)
        if amount_divided <= 2:
            break
        total += amount_divided - 2
        amount = amount_divided
    return total + (amount - 2)