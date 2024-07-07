def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1

    total_distance = 0
    height = h2
    for _ in range(bounces):
        total_distance += height
        height *= bounciness_index

    return format(total_distance, ".4f")


print(bouncing_balls())