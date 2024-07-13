def fuel_cost():
    n = int(input())
    result = 0
    for _ in range(n):
        x = int(input())
        result += max(0, (x // 3) - 2)
    return result