def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = 0

    for _ in range(bounces):
        total_distance += (h2 - h1) * bounciness_index
        h1, h2 = h2, h2 * bounciness_index

    return round(total_distance, 5)


print(round(bouncing_balls(), 5))