def rounded_avg(num1, num2):
    if not isinstance(num1, int) or not isinstance(num2, int):
        return "Invalid input! Please enter integer values."
    return round((num1 + num2) / 2)


def main():
    while True:
        try:
            n = input("Enter first number: ")
            m = input("Enter second number: ")
            if n and m:
                result = rounded_avg(int(n), int(m))
                print(result)
                break
            else:
                print("Invalid input! Please enter integer values.")
        except ValueError:
            print("Invalid input! Please enter integer values.")


main()