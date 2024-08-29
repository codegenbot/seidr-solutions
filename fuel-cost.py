def fuel_cost():
    n = int(input())
    total = 0
    for _ in range(n):
        num = int(input()) // 3 - 2
        total += num
    return total