input_str = input("Enter starting height, first bounce height, and number of bounces (separated by spaces): ")
inputs = input_str.split()

if len(inputs) < 3:
    print("Invalid input. Please provide starting height, first bounce height, and number of bounces.")
    exit()

starting_height = float(inputs[0])
first_bounce_height = float(inputs[1])
num_bounces = float(inputs[2])