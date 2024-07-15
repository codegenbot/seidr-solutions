def rounded_avg(n, m):
    return round((n + m) / 2)


def main():
    while True:
        try:
            n = int(input("Enter first number: "))
            m = int(input("Enter second number: "))
            result = rounded_avg(n, m)
            print(result)
        except ValueError:
            print("Invalid input! Please enter integers.")


if __name__ == "__main__":
    main()