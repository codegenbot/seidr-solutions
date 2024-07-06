def digit_sum(n):
    return sum(int(i) for i in str(n))


def main():
    while True:
        try:
            n = int(input("Enter a number: "))
            print(digit_sum(n))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")


if __name__ == "__main__":
    main()