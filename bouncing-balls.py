def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1

    distance = 0
    for _ in range(bounces):
        h2 *= bounciness_index
        distance += 2 * h2

    return format(distance, ".4f")


print(bouncing_balls())