Here is the corrected code:

```
def truncate_number_to_two_decimal_places():
    while True:
        try:
            number = float(input("Enter a number (default is 0): ") or "0")
            if not isinstance(number, (int, float)):
                print("Invalid input. Please enter a valid number.")
            else:
                break
        except ValueError:
            print("Invalid input. Please enter a valid number.")

    while True:
        try:
            n = int(input("Enter the number of decimal places (default is 2): ") or "2")
            if n < 0:
                print("Number of decimal places should be non-negative.")
            else:
                result = "{:.{}f}".format(number, min(2, n))
                print(f"The truncated number is {result}")
                break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")