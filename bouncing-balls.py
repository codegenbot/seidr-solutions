starting_height, first_bounce_height, num_bounces = map(float, input("Enter starting height: ").split()), float(input("Enter first bounce height: ")), float(input("Enter number of bounces: "))
result = calculate_total_distance(starting_height, first_bounce_height, num_bounces)
print(result)