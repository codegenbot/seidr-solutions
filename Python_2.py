def truncate_number_to_two_decimal_places():
    while True:
        try:
            number = float(input("Enter a number (default is 0): ") or "0")
            n = int(input("Enter the number of decimal places (default is 2): ") or "2"
                       if input().strip() == "":
                           n = min(2, int(n))
                       else:
                           n = min(2, int(input("Enter a valid integer: ")))
                       result = truncate_number(number, n)
                       print(f"The truncated number is {result}")
                       break
        except ValueError:
            print("Invalid input. Please enter a valid number.")