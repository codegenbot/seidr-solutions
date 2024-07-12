starting_height, first_bounce_height, num_bounces = map(float, input("Enter starting height, first bounce height, and number of bounces separated by commas: ").split(", "))  
bounciness_index = first_bounce_height / starting_height  
total_distance = starting_height + first_bounce_height + 2 * first_bounce_height * ((1 - bounciness_index) ** num_bounces)  
print(total_distance)