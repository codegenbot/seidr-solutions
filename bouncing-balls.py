def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (1 + 2) * bounces * start_height * bounciness_index

    print(total_distance)


bouncing_balls()