def calculate_decimal_part(number):
    return abs(number) % 1

while True:
    input_str = input("Enter a number: ").strip()
    if input_str.replace('.', '', 1).isdigit():
        input_number = float(input_str)
        break
    else:
        print("Invalid input. Please enter a valid number.")

print(calculate_decimal_part(input_number))