while True:
    x = input("Enter the fraction x (in the format 'a/b'): ")
    n = input("Enter the fraction n (in the format 'c/d'): ")

    while not is_valid_fraction(x):
        x = input("Invalid input. Enter the fraction x (in the format 'a/b'): ")

    while not is_valid_fraction(n):
        n = input("Invalid input. Enter the fraction n (in the format 'c/d'): ")

    x_num, x_denom = map(int, x.split("/"))
    y_num, y_denom = map(int, n.split("/"))

    if x_denom == 0 or y_denom == 0:
        print("Error: Division by zero is not allowed")
    else:
        common_divisor = math.gcd(x_num, x_denom)
        simplified_x_num = x_num // common_divisor
        simplified_x_denom = (
            x_denom // common_divisor if common_divisor != x_denom else 1
        )

        common_divisor = math.gcd(y_num, y_denom)
        simplified_y_num = y_num // common_divisor
        simplified_y_denom = (
            y_denom // common_divisor if common_divisor != y_denom else 1
        )

        print(
            f"{simplified_x_num}/{simplified_x_denom} and {simplified_y_num}/{simplified_y_denom}"
        )

        sum_num = (
            simplified_x_num * simplified_y_denom
            + simplified_y_num * simplified_x_denom
        )
        sum_denom = simplified_x_denom * simplified_y_denom

        common_divisor = math.gcd(sum_num, sum_denom)
        simplified_sum_num = sum_num // common_divisor
        simplified_sum_denom = (
            sum_denom // common_divisor if common_divisor != sum_denom else 1
        )

        print(f"Sum: {simplified_sum_num}/{simplified_sum_denom}")