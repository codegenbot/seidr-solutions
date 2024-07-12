def main():
    def add(x: int, y: int):
        return x + y

    while True:
        try:
            num1 = int(input("Enter first number: "))
        except ValueError:
            print("Invalid input. Please enter a valid number.")
            continue

        try:
            num2 = int(input("Enter second number: "))
            print(f"The sum is {add(num1, num2)}")
        except ValueError:
            print("Invalid input. Please enter a valid number.")

    print("Program finished. Run again? (yes/no): ")
    response = input()
    if response.lower() != "yes":
        exit()


if __name__ == "__main__":
    main()