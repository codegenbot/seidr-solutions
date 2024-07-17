def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    for i in range(num_bounces):
        if i == 0:
            height_diff = (start_height + first_bounce_height) / 2
        else:
            first_bounce_height = bounciness_index * first_bounce_height
        total_distance += 2 * height_diff
        height_diff /= bounciness_index

    print(total_distance)


bouncing_balls()