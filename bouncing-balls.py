def bouncing_balls():
    h = float(input())
    first_height = float(input())
    bounciness_index = first_height / h
    bounces = int(input())

    total_distance = 0
    height = first_height
    for _ in range(bounces):
        total_distance += height + height
        height *= bounciness_index

    return format(total_distance, ".4f")


print(bouncing_balls())