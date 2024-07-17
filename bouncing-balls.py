def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    for i in range(num_bounces):
        if i == 0:
            height_diff = start_height - first_bounce_height
        else:
            height_diff = (first_bounce_height / start_height) ** 2 * bounciness_index
        total_distance += 4 * first_bounce_height
        first_bounce_height *= (1 - bounciness_index) ** 2

    print(total_distance)


bouncing_balls()