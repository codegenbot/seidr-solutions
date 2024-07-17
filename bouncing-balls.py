def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    current_height = start_height
    for i in range(num_bounces):
        height_diff = abs(current_height - first_bounce_height)
        total_distance += (2 * height_diff) + height_diff
        first_bounce_height /= bounciness_index
        current_height = first_bounce_height

    print(total_distance)


bouncing_balls()