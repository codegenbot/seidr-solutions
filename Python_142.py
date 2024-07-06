def main():
    print("1. Square")
    print("2. Cube")
    choice = int(input("Enter your choice (1 or 2): "))

    if choice == 1:
        num = float(input("Enter a number: "))
        sum_squares = num**2
    elif choice == 2:
        num = float(input("Enter a number: "))
        sum_squares = num**3
    else:
        print("Invalid operation. Please enter '1' for square or '2' for cube")

    check(sum_squares)


def check(s):
    print(s)


if __name__ == "__main__":
    main()