def rounded_avg(num1, num2):
    try:
        return round((int(num1) + int(num2)) / 2)
    except ZeroDivisionError:
        return "Cannot divide by zero!"


def main():
    while True:
        try:
            n = input("Enter first number: ")
            m = input("Enter second number: ")
            if (
                n.replace("-", "").replace(".", "").isnumeric()
                and m.replace("-", "").replace(".", "").isnumeric()
            ):
                result = rounded_avg(n, m)
                print(result)
                break
            else:
                print("Invalid input! Please enter integer values.")
        except ValueError:
            print("Invalid input! Please enter integer values.")


main()