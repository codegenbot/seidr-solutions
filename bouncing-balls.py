def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    # Calculate bounciness index
    bounciness_index = first_bounce_height / starting_height
    
    # Initialize total distance traveled
    total_distance = 0
    
    # Loop through each bounce
    for i in range(num_bounces):
        # Calculate the distance traveled during this bounce
        distance = (starting_height + (i * bounciness_index)) - starting_height
        
        # Add to total distance traveled
        total_distance += distance
        
    return total_distance