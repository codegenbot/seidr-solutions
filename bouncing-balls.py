def bouncing_balls():
    h = float(input())
    b = float(input())
    i = b / h
    for _ in range(int(input()) - 1):
        b *= 1 - ((b / h) ** 0.5)
    return round(b + h * 2, 3)


print(bouncing_balls())