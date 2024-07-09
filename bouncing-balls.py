def bouncing_balls():
    h = float(input())
    hb = float(input())
    b = int(input())

    bi = hb / h

    distance = 0
    height = hb
    for _ in range(b):
        distance += 2 * height
        height *= bi

    return format(distance, ".4f")


print(bouncing_balls())