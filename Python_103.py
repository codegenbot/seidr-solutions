def rounded_avg(a, b):
    return round((a + b) / 2.0)


def main():
    while True:
        try:
            n = int(input("Enter first number: "))
            m = int(input("Enter second number: "))
            if isinstance(n, int) and isinstance(m, int):
                print(rounded_avg(n, m))
                break
            else:
                print("Invalid input! Please enter integer values.")
        except ValueError:
            print("Invalid input! Please enter integer values.")


main()