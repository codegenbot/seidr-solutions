def fuel_cost():
    n = int(input())
    total = 0
    import math
    for _ in range(n):
        num = int(input())
        total += math.floor((num // 3) - 2)
    return total