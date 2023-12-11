def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    # Calculate the bounciness index
    bounciness = first_bounce_height / starting_height
    total_distance = 0
    for i in range(num_bounces):
        total_distance += (starting_height + (i * bounciness))
    return total_distance