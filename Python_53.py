def add(x: int, y: int):
    return x + y


def main():
    while True:
        try:
            num1 = int(input("Enter first number: "))
        except ValueError:
            print("Invalid input. Please enter a valid number.")
            continue

        while True:
            try:
                num2 = int(input("Enter second number: "))
                print(f"The sum is {add(num1, num2)}")
                input("Press Enter to continue...")
                cont = input("Do you want to continue? (y/n): ")
                if cont.lower() != "y":
                    break
            except ValueError:
                print("Invalid input. Please enter a valid number.")


if __name__ == "__main__":
    main()