def main():
    print("Find two numbers from user and find their quotient.")

    x = float(input("Enter first number: "))
    y = float(input("Enter second number: "))

    if y != 0:
        result = -x / y
        print(f"The quotient is {result}.")
    else:
        print("Second number cannot be zero.")


if __name__ == "__main__":
    main()