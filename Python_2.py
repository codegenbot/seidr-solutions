def truncate_number_to_two_decimal_places():
    number = float(input("Enter a number: "))
    num_decimal_places = int(
        input("Enter the number of decimal places (default is 2): ") or "2"
    )
    result = "{:.{}f}".format(number, min(2, num_decimal_places))
    print(f"The truncated number is {result}")