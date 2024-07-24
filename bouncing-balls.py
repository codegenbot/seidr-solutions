def bouncing_balls():
    h = float(input())
    b = float(input())
    i = b / h
    n = int(input())
    d = 0
    for _ in range(n):
        d += (2 * h) ** 0.5
        h *= i
    return round(d, 4)


print(bouncing_balls())