def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1

    total_distance = 0
    for _ in range(bounces):
        h2 *= bounciness_index
        total_distance += 2 * h2

    return str(round(total_distance, 6))


print(bouncing_balls())