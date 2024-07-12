def calculate_decimal_part(number):
    return abs(number) % 1

while True:
    try:
        input_number = raw_input("Enter a number: ")
        if input_number == "":
            raise ValueError
        input_number = float(input_number)
        break
    except ValueError:
        print("Invalid input. Please enter a valid number.")

print(calculate_decimal_part(input_number))