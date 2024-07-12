def calculate_decimal_part(number):
    number = float(number)
    return number % 1

input_number = input()
print(calculate_decimal_part(input_number))