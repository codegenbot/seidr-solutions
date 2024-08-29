def bouncing_balls(start_height, first_bounce, num_bounces):
    bounciness = first_bounce / start_height
    total_distance = 0
    height = first_bounce

    for _ in range(num_bounces - 1):
        height *= bounciness
        total_distance += 2 * height

    return str(format(total_distance, ".3f"))