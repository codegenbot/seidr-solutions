def main():
    print("Enter a list of integers separated by spaces:")
    xs = list(map(int, input().split()))

    def find_zero(xs):
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