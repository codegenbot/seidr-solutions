def add(x: int, y: int):
    return x + y


def main():
    while True:
        try:
            num1 = int(input("Enter first number: "))
            num2 = int(input("Enter second number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a valid number.")

    cont = "y"
    while True:
        print(f"The sum is {add(num1, num2)}")
        cont = input("Do you want to continue? (y/n): ")
        if cont.lower() in ["n", "no"]:
            break
        elif cont.lower() != "y":
            print("Invalid input. Please enter either 'y' or 'n'.")
    if cont.lower() == "n":
        print("Program ended.")
    else:
        main()


if __name__ == "__main__":
    main()