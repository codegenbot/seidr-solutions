def fuel_cost():
    n = int(input())
    result = 0
    for _ in range(n):
        x = int(input())
        result += (x // 3 - 2)
    print(result)