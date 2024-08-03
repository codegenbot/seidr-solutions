def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounce_index = h2 / h1
    total_distance = 0

    for _ in range(bounces):
        total_distance += (h1 + h2) * 2
        h1, h2 = h2, h2 / bounce_index

    return f"{total_distance:.4f}"


print(bouncing_balls())