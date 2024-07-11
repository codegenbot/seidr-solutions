```Python
def truncate_number(number, n):
    return format(round(float(f"{number:.{n}f}"),2), ".2f")

def truncate_number_to_two_decimal_places():
    number = float(input("Enter a number: "))
    n = 0 if int(str(number).split('.')[1]) <= 5 else 2
    result = truncate_number(number, n)
    print(f"The truncated number is {result}")

truncate_number_to_two_decimal_places()