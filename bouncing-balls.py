input_str = input("Enter starting height, first bounce height, and number of bounces (separated by spaces): ")
inputs = input_str.split()

if len(inputs) >= 3:
    starting_height = float(inputs[0])
    first_bounce_height = float(inputs[1])
    num_bounces = int(inputs[2])
    
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height + first_bounce_height + (2 * first_bounce_height * bounciness_index) * (num_bounces - 1)
    
    print(total_distance)
else:
    print("Please provide all three values.")