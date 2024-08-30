def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height

    total_distance = 0
    height = first_bounce_height

    for _ in range(num_bounces):
        total_distance += 2 * math.sqrt(height) * abs(1 - bounciness_index)
        height *= bounciness_index

    return format(total_distance, ".3f")