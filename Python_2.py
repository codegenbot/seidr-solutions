def calculate_decimal_part(number):
    if isinstance(number, float):
        return abs(number) % 1.0
    else:
        return 0.0

while True:
    try:
        input_number = float(input("Enter a number: ").strip())
        break
    except ValueError:
        print("Invalid input. Please enter a valid number.")
    except KeyboardInterrupt:
        print("Program terminated by user.")
        quit()

print(calculate_decimal_part(input_number))