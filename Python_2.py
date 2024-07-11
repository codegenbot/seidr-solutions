```Python
def truncate_number_to_two_decimal_places(number, num_decimal_places=None):
    if not isinstance(number, (int, float)):
        print("Invalid input. Please enter a valid number.")
        return

    while True:
        try:
            if num_decimal_places is None:
                num_decimal_places = int(input("Enter the number of decimal places (default is 2): ") or "2")
            if num_decimal_places < 0:
                print("Number of decimal places should be non-negative.")
            else:
                result = "{:.{}f}".format(number, min(2, num_decimal_places))
                print(f"The truncated number is {result}")
                break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

truncate_number_to_two_decimal_places()