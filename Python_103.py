def main():
    while True:
        try:
            n = input("Enter first number: ")
            m = input("Enter second number: ")
            if isinstance(int(n), int) and isinstance(int(m), int):
                print(rounded_avg(int(n), int(m)))
                break
            else:
                print("Invalid input! Please enter integer values.")
        except ValueError:
            print("Invalid input! Please enter integer values.")


main()