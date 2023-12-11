def bouncing_balls(starting_height, height_after_first_bounce, number_of_bounces):
    bounciness_index = height_after_first_bounce / starting_height
    total_distance = 0
    for i in range(number_of_bounces):
        total_distance += (starting_height + (i * bounciness_index))
    return total_distance