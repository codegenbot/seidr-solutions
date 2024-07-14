def bouncing_balls():
    h = float(input())
    bh = float(input())
    bi = bh / h
    bounces = int(input())
    total_distance = 0
    for _ in range(bounces):
        h *= bi
        total_distance += 2 * h
    print(total_distance)


bouncing_balls()