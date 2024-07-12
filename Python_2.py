def calculate_decimal_part(number):
    return abs(number) % 1

try:
    input_number = float(input("Enter a number: "))
except ValueError:
    print("Invalid input. Please enter a valid number.")
else:
    print(calculate_decimal_part(input_number))