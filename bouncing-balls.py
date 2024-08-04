def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = (1 + bounciness_index) ** bounces - 1

    print(total_distance)


bouncing_balls()