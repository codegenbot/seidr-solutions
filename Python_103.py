def rounded_avg(a, b):
    return round((a + b) / 2.0)


def main():
    while True:
        try:
            choice = input("Enter first number, 'q' to quit: ")
            if choice.lower() == "q":
                print("Exiting program.")
                break
            n = int(input("Enter first number: "))
            m = int(input("Enter second number: "))
            if isinstance(n, int) and isinstance(m, int):
                print(rounded_avg(n, m))
                continue
            else:
                print("Invalid input! Please enter integer values.")
        except ValueError:
            print("Invalid input! Please enter integer values.")


main()