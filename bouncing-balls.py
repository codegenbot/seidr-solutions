def bouncing_balls():
    h = float(input())
    b = float(input())
    i = b / h

    n = int(input())
    d = 0
    for _ in range(n):
        h = (h + b) * i
        d += 2 * h

    return str(round(d, 4))


print(bouncing_balls())