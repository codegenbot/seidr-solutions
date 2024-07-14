Here is the Python solution for the problem:

def fuel_cost(fuel):
    return sum((i // 3 - 2) for i in map(int, fuel.split(',')))

fuel = input().strip()
print(fuel_cost(fuel))