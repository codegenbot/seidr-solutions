def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for i in range(1, num_bounces + 1):
        distance = (2 * first_bounce_height) / (1 + 1) * 4 / bounciness_index
        total_distance += distance
        if i < num_bounces:
            first_bounce_height = (2 * first_bounce_height) / (1 + 1)

    print(total_distance)