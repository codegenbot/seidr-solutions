def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1

    total_distance = 0
    height = h2

    while bounces > 0:
        total_distance += height
        height *= bounciness_index
        bounces -= 1

    return format(total_distance, ".4f")


print(bouncing_balls())