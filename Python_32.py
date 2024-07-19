input_numbers = list(map(float, input("Enter three floating-point numbers separated by space: ").split()))
if len(input_numbers) == 3:
    print("Input accepted successfully.")
else:
    print("Invalid input. Please enter exactly three floating-point numbers separated by space.")