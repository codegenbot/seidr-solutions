input_str = input("Enter starting height, first bounce height, and number of bounces (separated by spaces): ")
inputs = input_str.split()

if len(inputs) >= 3:
    starting_height = float(inputs[0])
    first_bounce_height = float(inputs[1])
    num_bounces = float(inputs[2])
    # Add your calculation logic using starting_height, first_bounce_height, and num_bounces here
else:
    print("Please provide all three values.")