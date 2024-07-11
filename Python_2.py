def truncate_number() -> str:
    number = float(input("Enter the number to be truncated: "))
    n = int(input("Enter the number of decimal places to truncate: "))
    multiplier = 10**-n
    return str(round(number * multiplier) / multiplier)