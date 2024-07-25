numbers_input = input("Enter space-separated floating-point numbers: ")
numbers = list(map(float, numbers_input.split())) if numbers_input else print("Input should not be empty")