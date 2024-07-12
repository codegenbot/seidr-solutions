starting_height, first_bounce_height, num_bounces = map(float, input("Enter starting height, first bounce height, and number of bounces separated by commas: ").split(","))
if num_bounces < 1: print("Number of bounces should be at least 1.")
else: print(starting_height * sum(2 ** i for i in range(num_bounces)) * first_bounce_height / starting_height)