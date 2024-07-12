def calculate_decimal_part(number):
    try:
        return abs(number) % 1.0
    except ZeroDivisionError:
        return 0.0


while True:
    try:
        input_number = float(input("Enter a number: ").strip())
        break
    except ValueError:
        print("Invalid input. Please enter a valid number.")

print(calculate_decimal_part(input_number))