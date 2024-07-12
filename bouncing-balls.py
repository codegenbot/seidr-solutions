inputs = input("Enter starting height, first bounce height, and number of bounces separated by commas: ").split(",")
if len(inputs) < 3:
    print("Please provide all the required inputs.")
else:
    starting_height = float(inputs[0])
    first_bounce_height = float(inputs[1])
    num_bounces = int(inputs[2])
    
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height + (2 * first_bounce_height * ((1 - bounciness_index ** num_bounces) / (1 - bounciness_index)))
    
    print(total_distance)