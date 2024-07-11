import math


def is_valid_fraction(fraction):
    parts = fraction.split("/")
    if len(parts) != 2:
        return False
    numerator, denominator = map(int, parts)
    return numerator != 0 and denominator != 0


def main():
    print("Do you want to enter a number or a fraction for x? (1/1 or num): ")
    while True:
        choice = input().lower()
        if choice == "num":
            break
        elif choice != "fraction":
            print("Invalid input. Please enter 'num' or 'fraction'.")

    if choice == "num":
        while True:
            try:
                y = int(input("Please enter the number: "))
                break
            except ValueError:
                print("Invalid input. Please enter an integer.")

        while True:
            c, d = map(
                int, input("Enter the fraction n (in the format 'a/b'): ").split("/")
            )
            if d == 0:
                print("Division by zero is not allowed")
                break
            else:
                common_divisor = math.gcd(d, y)
                simplified_x_num = c * (y // common_divisor)
                simplified_x_denom = d // common_divisor

                common_divisor = math.gcd(c, d)
                if c % common_divisor != 0:
                    common_divisor = math.gcd(c * common_divisor, y)
                simplified_y_num = c // common_divisor
                simplified_y_denom = d // common_divisor

                print(
                    f"{simplified_x_num}/{simplified_x_denom} and {simplified_y_num}/{simplified_y_denom}"
                )
                sum_num = c * simplified_y_denom + c * simplified_x_denom
                sum_denom = d * simplified_y_denom

                if sum_denom == 0:
                    print("Division by zero is not allowed")
                else:
                    common_divisor = math.gcd(sum_num, sum_denom)
                    simplified_sum_num = sum_num // common_divisor
                    simplified_sum_denom = sum_denom // common_divisor
                    print(f"Sum: {simplified_sum_num}/{simplified_sum_denom}")
                    break

    else:
        while True:
            try:
                a, b = map(
                    int,
                    input("Enter the fraction x (in the format 'a/b'): ").split("/"),
                )
                if not is_valid_fraction(str(a) + "/" + str(b)):
                    print("Invalid fraction. Please enter a valid fraction.")
                break
            except ValueError:
                print("Invalid input. Please enter a valid fraction.")

        while True:
            try:
                y = int(input("Please enter the number: "))
                break
            except ValueError:
                print("Invalid input. Please enter an integer.")

        while True:
            c, d = map(
                int, input("Enter the fraction n (in the format 'a/b'): ").split("/")
            )
            if d == 0:
                print("Division by zero is not allowed")
                break
            else:
                common_divisor = math.gcd(b, d)
                simplified_x_num = a * (d // common_divisor)
                simplified_x_denom = b // common_divisor

                common_divisor = math.gcd(c, d)
                if c % common_divisor != 0:
                    common_divisor = math.gcd(a * common_divisor, b)
                simplified_y_num = c // common_divisor
                simplified_y_denom = d // common_divisor

                print(
                    f"{simplified_x_num}/{simplified_x_denom} and {simplified_y_num}/{simplified_y_denom}"
                )
                sum_num = a * simplified_y_denom + c * simplified_x_denom
                sum_denom = b * simplified_y_denom

                if sum_denom == 0:
                    print("Division by zero is not allowed")
                else:
                    common_divisor = math.gcd(sum_num, sum_denom)
                    simplified_sum_num = sum_num // common_divisor
                    simplified_sum_denom = sum_denom // common_divisor
                    print(f"Sum: {simplified_sum_num}/{simplified_sum_denom}")
                    break


if __name__ == "__main__":
    main()