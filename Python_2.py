def calculate_decimal_part(number):
    return number - truncate_number(number)

def truncate_number(number):
    return int(number)

# Example usage:
input_number = float(raw_input("Enter a number: "))
print(calculate_decimal_part(input_number))