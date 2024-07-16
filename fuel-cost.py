```
def calculate_fuel(amount):
    if amount <= 2:
        return 0
    return amount // 3 - 2


def fuel_cost(vector):
    return sum(calculate_fuel(i) for i in vector)


vector = [int(x) for x in input().replace(' ',',').split(',')]
print(fuel_cost(vector))