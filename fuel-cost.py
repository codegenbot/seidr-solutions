Here is the solution in Python:

def fuel_cost():
    n = int(input())
    return sum((i//3 - 2) for i in range(1, n+1))

print(fuel_cost())