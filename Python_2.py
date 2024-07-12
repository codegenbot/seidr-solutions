def calculate_decimal_part(number):
    try:
        input_number = float(number)
        if isinstance(input_number, float):
            return abs(input_number) % 1.0
        else:
            return 0.0
    except ValueError:
        return 0.0

while True:
    try:
        input_number = input("Enter a number: ").strip()
        print(calculate_decimal_part(input_number))
        break
    except ValueError:
        print("Invalid input. Please enter a valid number.")
    except KeyboardInterrupt:
        print("Program terminated by user.")
        quit()