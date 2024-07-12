def calculate_decimal_part(number):
    return abs(float(number)) % 1

while True:
    try:
        input_number = input("Enter a number: ")
        if input_number.replace(".", "", 1).isdigit():
            break
        else:
            raise ValueError
    except ValueError:
        print("Invalid input. Please enter a valid number.")

print(calculate_decimal_part(input_number))