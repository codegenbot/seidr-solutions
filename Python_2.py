def calculate_decimal_part(number):
    if isinstance(number, (int, float)):
        return abs(number) % 1.0
    else:
        return 0.0

while True:
    try:
        input_number = float(input())
        break
    except ValueError:
        print("Invalid input. Please enter a valid number.")

print(calculate_decimal_part(input_number))