def bouncing_balls():
    h = float(input())
    hb = float(input())
    bi = hb / h
    n = int(input())
    total_distance = 0
    height = hb
    for _ in range(n):
        total_distance += 2 * (height + h)
        h, height = height, h * bi
    return round(total_distance, 5)


print(bouncing_balls())