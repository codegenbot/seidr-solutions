def bouncing_balls():
    h = float(input())
    hb = float(input())
    bi = hb / h
    n = int(input())
    total_distance = 0
    height = hb
    for _ in range(n):
        total_distance += 2 * height
        height *= bi
    print(bi)
    print(total_distance)


bouncing_balls()