def calculate_decimal_part(number):
    return abs(float(number)) % 1

try:
    input_number = input("Enter a number: ")
except:
    print("Invalid input. Please enter a valid number.")
else:
    print(calculate_decimal_part(input_number))