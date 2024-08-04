def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1

    total_distance = (h1 + h2) * 2
    for _ in range(bounces - 1):
        total_distance += ((bounciness_index**2) * (2 * (h1 + h2))) / 3.0
        h1, h2 = h2, (h2 * bounciness_index)

    return str(round(total_distance, 5))


print(bouncing_balls())