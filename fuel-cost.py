def calculate_fuel(amount):
    return (amount + 2) // 3

def fuel_cost(vector):
    return sum(calculate_fuel(int(x)) for x in vector)

vector = [int(x) for x in input().replace(' ',',').split(',')]
print(fuel_cost(vector))