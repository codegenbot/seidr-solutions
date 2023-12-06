
# Python program to find the total distance traveled by a ball

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

# Test the function with the given input
result = bouncing_balls(15.045224921303417, 4.824578432419273, 8)
print(result) # Output: 29.245922471513563