def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = (bounciness_index**2 + 1) * 2

    for _ in range(1, bounces):
        h2 *= bounciness_index
        total_distance += (bounciness_index**2 + 1) * 2

    print(total_distance)


bouncing_balls()