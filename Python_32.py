def main():
    xs = []
    while True:
        try:
            val = input().strip()
            if not val:
                break
            xs.append(float(val))
        except ValueError:
            print("Invalid input. Please enter a valid number.")

    def find_zero(xs: list):
        try:
            n = len(xs)
            if n < 2:
                raise ValueError("Input list must have at least 2 elements")

            a = xs[-1]
            b = xs[-2]

            if a == 0:
                raise ZeroDivisionError("Division by zero not allowed")

            return -b / a
        except (ValueError, ZeroDivisionError) as e:
            return str(e)

    print(find_zero(xs))

# Call the main function
main()