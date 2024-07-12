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
                break
            except ValueError:
                print("Invalid input. Please enter a valid number.")

        print(f"The sum is {add(num1, num2)}")
        input("Press Enter to continue...")
        cont = input("Do you want to continue? (y/n): ")
        while True:
            if cont.lower() == "n":
                break
            elif cont.lower() != "y" and cont.lower() != "no":
                print("Invalid input. Please enter either 'y' or 'n'.")
                cont = input("Do you want to continue? (y/n): ")
            else:
                break
        if cont.lower() == "n":
            break


if __name__ == "__main__":
    main()