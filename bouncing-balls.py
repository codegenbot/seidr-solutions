def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for i in range(num_bounces):
        distance_per_bounce = 2 * (start_height + first_bounce_height)
        total_distance += distance_per_bounce
        bounce_height = (first_bounce_height * bounciness_index) ** (num_bounces - i)

    return format(total_distance, ".4f")