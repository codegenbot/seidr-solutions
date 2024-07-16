def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    index = h2 / h1
    distance = 0
    for _ in range(bounces):
        distance += (h1 + h1 * index) - h1
        h1 *= index

    print(round(distance, 4))


bouncing_balls()