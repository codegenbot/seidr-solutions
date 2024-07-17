def fuel_cost(n):
    return sum((x // 3) - 2 for x in map(int, input().split()))