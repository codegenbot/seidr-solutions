def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0

    for i in range(num_bounces):
        first_bounce_height *= 2
        total_distance += (first_bounce_height - start_height) * 4 / bounciness_index

    print(total_distance)