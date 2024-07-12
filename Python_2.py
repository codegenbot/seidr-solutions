def calculate_decimal_part(number):
    return abs(float(number)) % 1

while True:
    try:
        input_number = raw_input("Enter a number: ")
        if '.' in input_number:
            break
        else:
            raise ValueError
    except ValueError:
        print("Invalid input. Please enter a valid number with a decimal point.")

print(calculate_decimal_part(input_number))