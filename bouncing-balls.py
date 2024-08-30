def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    distance = (bounciness_index**2 - 1) * 2

    total_distance = distance * bounces

    print(round(total_distance, 4))


bouncing_balls()