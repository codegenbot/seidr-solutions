def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1

    distance = 0
    for _ in range(bounces):
        distance += (h1 + h2) * 2
        h1, h2 = h2, h2 * bounciness_index

    return str(distance)


print(bouncing_balls())