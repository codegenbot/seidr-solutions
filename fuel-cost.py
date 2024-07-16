```
def calculate_fuel(amount):
    result = amount // 3
    return max(0, result - 2)

def fuel_cost(vector):
    return sum(calculate_fuel(i) for i in vector)

vector = list(map(int, input().split(',')))
print(fuel_cost(vector))