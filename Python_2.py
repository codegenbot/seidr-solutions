def calculate_decimal_part(number):
    if isinstance(number, (int, float)):
        return abs(number) % 1.0
    else:
        return 0.0

try:
    input_number = float(raw_input("Enter a number: ").strip())
    print(calculate_decimal_part(input_number))
except ValueError:
    print("Invalid input. Please enter a valid number.")