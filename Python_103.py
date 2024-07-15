def main():
    while True:
        try:
            n = int(input("Enter first number: "))
            m = int(input("Enter second number: "))
            print(rounded_avg(n, m))
            break
        except ValueError:
            print("Invalid input! Please enter integer values.")


def rounded_avg(a, b):
    return round((a + b) / 2)


main()