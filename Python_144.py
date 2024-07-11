while True:
    x = input("Enter the fraction x (in the format 'a/b'): ")
    n = input("Enter the fraction n (in the format 'c/d'): ")

    try:
        x_num, x_denom = map(int, x.split("/"))
        y_num, y_denom = map(int, n.split("/"))

        if x_denom == 0 or y_denom == 0:
            print("Error: Division by zero is not allowed")
        else:
            common_divisor = math.gcd(x_num, x_denom)
            simplified_x_num = x_num // common_divisor
            simplified_x_denom = (x_denom // common_divisor if common_divisor != x_denom else 1)

            common_divisor = math.gcd(y_num, y_denom)
            simplified_y_num = y_num // common_divisor
            simplified_y_denom = (y_denom // common_divisor if common_divisor != y_denom else 1)

            print(f"{simplified_x_num}/{simplified_x_denom} and {simplified_y_num}/{simplified_y_denom}")
    except ValueError:
        print("Error: Invalid fraction format. Please enter 'a/b'")