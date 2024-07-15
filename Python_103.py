def rounded_avg(a, b):
    return round((a + b) / 2.0)


def main():
    while True:
        try:
            n = int(input("Enter first number: "))
            m = input("Enter second number: ")
            if not m:
                print("Please enter a value for the second number.")
                continue
            m = int(m)
            print(rounded_avg(n, m))
            break
        except ValueError:
            print("Invalid input! Please enter integer values.")


main()