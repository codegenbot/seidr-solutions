def bouncing_balls(starting_height, height_after_first_bounce, number_of_bounces):
    bounciness_index = height_after_first_bounce / starting_height
    total_distance = (
        (1 + 2**0.5)
        * starting_height
        * ((1 - bounciness_index ** (-2)) ** number_of_bounces - 1)
    )
    return total_distance