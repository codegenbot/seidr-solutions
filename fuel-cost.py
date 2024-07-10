Here is the Python code to solve the problem:

def fuel_cost(fuel_prices):
    return sum((price // 3) - 2 for price in fuel_prices)

fuel_prices = list(map(int, input().split()))
print(fuel_cost(fuel_prices))