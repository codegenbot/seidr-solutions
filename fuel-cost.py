def calculate_fuel():
    vector = list(map(int, input().replace(" ", ",").split(",")))
    return sum((amount // 3) - 2 for amount in vector)