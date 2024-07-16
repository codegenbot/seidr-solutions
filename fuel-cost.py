def calculate_fuel(vector):
    return sum((amount // 3) - 2 for amount in map(int, input().replace(" ", ",").split(",")))