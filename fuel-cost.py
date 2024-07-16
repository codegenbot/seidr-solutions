def calculate_fuel():
    return sum((amount // 3) - 2 for amount in map(int, input().split()))