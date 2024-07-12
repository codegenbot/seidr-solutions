starting_height, first_bounce_height, num_bounces = map(float, input("Enter starting height, first bounce height, and number of bounces (separated by spaces): ").split())
bounciness_index = first_bounce_height / starting_height
total_distance = starting_height + (starting_height + first_bounce_height) * (bounciness_index ** num_bounces)
print(total_distance)