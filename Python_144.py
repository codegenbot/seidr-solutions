```
a, b = map(int, input("Enter the fraction x (in the format 'a/b'): ").split("/"))
while a == 0:
    print("Invalid input. Please enter a valid fraction.")
    a, b = map(int, input("Enter the fraction x (in the format 'a/b'): ").split("/"))

if b == 1:
    y = int(input("Please enter the number: "))
    while True:
        c, d = map(int, input("Enter the fraction n (in the format 'a/b'): ").split("/"))
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

            print(f"{simplified_x_num}/{simplified_x_denom} and {simplified_y_num}/{simplified_y_denom}")
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

else:
    n = input("Enter the fraction n (in the format 'a/b'): ")
    while not is_valid_fraction(n):
        print("Invalid input. Please enter a valid fraction.")
        n = input("Enter the fraction n (in the format 'a/b'): ")

    c, d = map(int, n.split("/"))
    if b == 0 or d == 0:
        print("Division by zero is not allowed")
    else:
        common_divisor = math.gcd(b, d)
        simplified_x_num = a * (d // common_divisor)
        simplified_x_denom = b // common_divisor

        common_divisor = math.gcd(c, d)
        if c % common_divisor != 0:
            common_divisor = math.gcd(a * common_divisor, b)
        simplified_y_num = c // common_divisor
        simplified_y_denom = d // common_divisor

        print(f"{simplified_x_num}/{simplified_x_denom} and {simplified_y_num}/{simplified_y_denom}")
        sum_num = a * simplified_y_denom + c * simplified_x_denom
        sum_denom = b * simplified_y_denom

        if sum_denom == 0:
            print("Division by zero is not allowed")
        else:
            common_divisor = math.gcd(sum_num, sum_denom)
            simplified_sum_num = sum_num // common_divisor
            simplified_sum_denom = sum_denom // common_divisor
            print(f"Sum: {simplified_sum_num}/{simplified_sum_denom}")