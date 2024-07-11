```
def truncate_number(number, n):
    return format(round(float(f"{number:.{n}f}"), 2), ".2f")

def truncate_number_to_two_decimal_places():
    number = float(input("Enter a number (default is 0): ") or "0")
    while True:
        try:
            n = int(input("Enter the number of decimal places (default is 2): ") or "2")
            if n < 0:
                print("Number of decimal places should be non-negative.")
            else:
                result = truncate_number(number, min(2, n))
                print(f"The truncated number is {result}")
                break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

truncate_number_to_two_decimal_places()