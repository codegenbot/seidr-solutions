```
def calculate_fuel(amount):
    if amount <= 2:
        return max(0, amount - 2)
    else:
        return (amount // 3) - 1

def fuel_cost(vector):
    return sum(calculate_fuel(i) for i in vector)

vector = [int(x) for x in input().split()]
print(fuel_cost(vector))