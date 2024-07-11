starting_height, first_bounce_height, num_bounces = map(float, input("Enter starting height, first bounce height, and number of bounces separated by space: ").split())
result = calculate_total_distance(starting_height, first_bounce_height, num_bounces)
print(result)