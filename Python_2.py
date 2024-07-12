def calculate_decimal_part(number):
    return abs(number) % 1

input_number = 0
while True:
    try:
        input_number = float(input("Enter a number: "))
        break
    except ValueError:
        print("Invalid input. Please enter a valid number.")

print(calculate_decimal_part(input_number))