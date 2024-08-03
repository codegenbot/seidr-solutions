def fuel_cost():
    n = int(input())
    result = 0
    for _ in range(n):
        x = int(input())
        temp = (x // 3) - 2
        if temp < 0:
            temp = 0
        result += temp
    print(result)