def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1

    distance = 0
    height = h1
    for _ in range(bounces):
        distance += 2 * height
        height *= bounciness_index

    print(round(distance, 4))


bouncing_balls()