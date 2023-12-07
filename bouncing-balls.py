def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    for i in range(num_bounces):
        current_height = starting_height + i * bounciness_index
        previous_height = starting_height + (i-1) * bounciness_index
        distance_traveled = min(current_height, previous_height) - previous_height
        total_distance += distance_traveled
    return total_distance