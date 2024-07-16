def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1

    total_distance = 0
    for _ in range(bounces):
        total_distance += 2 * abs(h2 - h1)
        h1, h2 = h2, (h2 / bounciness_index)

    print(round(total_distance, 4))


bouncing_balls()