def calculate_decimal_part(number):
    return number - int(number)

# Example usage:
while True:
    try:
        input_number = float(input("Enter a number: "))
        print(calculate_decimal_part(input_number))
        break
    except ValueError:
        print("Please enter a numeric value.")