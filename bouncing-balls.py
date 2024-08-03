def bouncing_ball(start_height, first_bounce, num_bounces):
    bounciness_index = first_bounce / start_height
    total_distance = (2 * (1 - math.pow(bounciness_index, 0.5))) * num_bounces
    return round(total_distance, 4)