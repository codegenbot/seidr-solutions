def main():
    xs = list(map(float, input("Enter a space-separated list of floats: ").split()))

    def find_zero(xs: list):
        if len(xs) < 2:
            raise ValueError("Input list must have at least 2 elements")

        a = xs[-1]
        b = xs[-2]

        if a == 0:
            raise ZeroDivisionError("Division by zero not allowed")

        return -b / a

    try:
        result = find_zero(xs)
        print(result)
    except (ValueError, ZeroDivisionError) as e:
        print(str(e))


# Call the main function
main()