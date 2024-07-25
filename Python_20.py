input_numbers = input("Enter space-separated floating-point numbers: ")
numbers = list(map(float, input_numbers.split())) if input_numbers else print("Input should not be empty")