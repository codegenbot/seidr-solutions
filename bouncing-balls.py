def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    height = first_bounce_height

    for _ in range(bounces - 1):
        height *= bounciness_index * 2
        total_distance += height

    print(total_distance)


bouncing_balls()