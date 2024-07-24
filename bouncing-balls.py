def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = 0

    for _ in range(bounces):
        total_distance += bounciness_index
        h2 /= 2

    return format(total_distance, ".4f")


print(bouncing_balls())