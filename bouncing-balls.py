def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 1 + 2 * np.sum(
        (np.power(bounciness_index, range(1, num_bounces + 1)) - 1)
        / (bounciness_index - 1)
    )
    return round(total_distance, 6)