def bouncing_balls(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = (2 ** (num_bounces + 1) - 1) * (2**num_bounces) * bounciness_index
    return f"{total_distance:.4f}"