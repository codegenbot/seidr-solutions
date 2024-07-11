def truncate_number(number, n):
    return format(round(float(f"{number:.{n}f}"), 2), ".2f")


def truncate_number_to_two_decimal_places():
    number = float(input("Enter a number: "))
    n = int(input("Enter the number of decimal places: "))
    if n < 0:
        print("Number of decimal places should be non-negative.")
    else:
        result = truncate_number(number, max(0, min(n, 2)))
        print(f"The truncated number is {result}")


truncate_number_to_two_decimal_places()