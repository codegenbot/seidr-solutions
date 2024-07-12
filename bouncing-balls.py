inputs = input("Enter starting height, first bounce height, and number of bounces separated by commas: ").split(",")  
if len(inputs) < 3:  
    print("Please provide all the required inputs.")  
else:  
    starting_height = float(inputs[0])  
    first_bounce_height = float(inputs[1])  
    num_bounces = int(inputs[2])  