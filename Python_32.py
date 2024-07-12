def main():
    xs = list(map(float, input().split()))

    if len(xs) < 2:
        print("Input list must have at least 2 elements")
        return

    def find_zero(xs: list):
        a = xs[-1]
        b = xs[-2]

        if a == 0:
            raise ZeroDivisionError("Division by zero not allowed")

        return -b / a

    try:
        result = find_zero(xs)
        print(result)
    except ZeroDivisionError as e:
        print(str(e)

# Call the main function
main()