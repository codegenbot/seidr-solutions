def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = 0

    for _ in range(bounces):
        total_distance += (h2 - h1) * 2
        h1, h2 = h2, (h2 - h1) * bounciness_index + h1

    return str(round(total_distance, 4))


print(bouncing_balls())