def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    distance = 0
    height = h2

    for _ in range(bounces):
        distance += 2 * height
        height *= bounciness_index

    return f"{distance:.4f}"


print(bouncing_balls())