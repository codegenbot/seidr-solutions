def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    bounces = int(input())

    total_distance = 0
    for _ in range(bounces):
        total_distance += starting_height * (1 + bounciness_index)
        starting_height = first_bounce_height

    print(round(total_distance, 4))


bouncing_balls()