input_numbers = input().strip().split()
if len(input_numbers) != 3 or any(not num.replace('.', '', 1).isdigit() for num in input_numbers):
    print("Invalid input. Please enter exactly three floating-point numbers separated by space.")
else:
    print("Input accepted successfully.")