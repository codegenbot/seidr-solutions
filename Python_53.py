```
def add():
    while True:
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
        except ValueError:
            print("Invalid input! Please enter a valid integer.")
            continue

        return x + y


def main():
    result = add()
    print(f"The sum of the numbers is {result}.")


if __name__ == "__main__":
    main()