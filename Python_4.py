user_input = input("Enter a list of numbers separated by spaces: ")
if user_input.strip():
    numbers = [float(x) for x in user_input.split()]
else:
    print("Empty input. Please enter at least one number.")