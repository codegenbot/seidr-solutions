def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    for i in range(num_bounces):
        # Calculate the height of this bounce
        current_height = starting_height - (i * bounciness_index)
        
        # Calculate the distance traveled during this bounce
        distance_traveled = current_height + (current_height * bounciness_index)
        
        # Add the distance traveled to the total distance
        total_distance += distance_traveled
    
    return total_distance