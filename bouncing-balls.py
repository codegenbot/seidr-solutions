def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = (bounciness_index + 1) ** bounces - 1

    print(format(total_distance, ".4f"))


bouncing_balls()