def bouncing_ball(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = (
        1 + 2 * np.sum(np.power(bounciness_index, 2 ** np.arange(1, num_bounces + 1)))
    ) - 1
    return str(format(total_distance, ".4f"))