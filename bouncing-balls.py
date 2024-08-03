def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounce_index = h2 / h1

    total_distance = 0
    for _ in range(bounces):
        total_distance += 2 * math.sqrt(h1 + h1) * bounce_index
        h1 *= bounce_index

    print(round(total_distance, 4))


bouncing_balls()