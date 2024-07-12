inputs = input("Enter starting height, first bounce height, and number of bounces separated by commas: ").split(",")
if len(inputs) >= 3:
    starting_height = float(inputs[0])
    first_bounce_height = float(inputs[1])
    num_bounces = float(inputs[2])
    # Continue with your calculations here
else:
    print("Please provide all three values separated by commas.")