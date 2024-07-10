def fuel_cost():
    n = int(input())
    return sum((i // 3 - 2) for i in range(1, n + 1))