import math


def calculate_fuel(amount):
    return (amount // 3) - 2


def fuel_cost(vector):
    if not vector:
        return 0
    try:
        return sum(calculate_fuel(int(i)) for i in vector)
    except ValueError:
        print("Invalid input. Please enter a comma-separated list of integers.")
        return None


vector = [x.strip() for x in input().replace(" ", ",").split(",")]
print(fuel_cost(vector))