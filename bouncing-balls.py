def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = (bounciness_index**2) - 3 * bounciness_index + 2

    for _ in range(bounces - 1):
        bounciness_index = (bounciness_index**2) - 3 * bounciness_index + 2
        total_distance += bounciness_index

    return f"{total_distance:.6f}"


print(bouncing_balls())