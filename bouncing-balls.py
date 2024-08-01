def bouncing_balls():
    h = float(input())
    b = float(input())
    i = b / h
    n = int(input())
    d = 0
    for _ in range(n):
        h *= i
        d += 2 * h
    print(d)


bouncing_balls()