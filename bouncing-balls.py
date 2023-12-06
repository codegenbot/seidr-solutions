def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    # Calculate the bounciness index
    bounciness_index = first_bounce_height / starting_height

    # Initialize the total distance to 0
    total_distance = 0

    # Loop through each bounce
    for i in range(num_bounces):
        # Calculate the distance traveled during each bounce
        distance = (starting_height + i * bounciness_index)

        # Add the distance to the total distance
        total_distance += distance

    # Return the total distance traveled
    return total_distance
