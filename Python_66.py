def sum_of_digits(n):
    total = 0
    for digit in str(n):
        total += int(digit)
    return total


def main():
    while True:
        try:
            num = int(input("Enter a number: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    print(sum_of_digits(num))


if __name__ == "__main__":
    main()