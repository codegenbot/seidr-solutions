def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1

    total_distance = 0
    current_height = h2

    for _ in range(bounces):
        total_distance += 2 * current_height
        current_height *= bounciness_index

    return "{:.6f}\n{}".format(bounciness_index, int(total_distance))


print(bouncing_balls())