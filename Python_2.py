def calculate_decimal_part(number):
    return float(number) % 1

input_number = float(input("Enter a number: "))
print(calculate_decimal_part(input_number))