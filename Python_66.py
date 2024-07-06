def digit_sum():
    n = input("Enter a number: ")
    if not n.isnumeric():
        return "Invalid input. Please enter an integer."
    return sum(int(i) for i in n)


def main():
    while True:
        try:
            print(digit_sum())
            break
        except Exception as e:
            print(f"Error: {e}")


if __name__ == "__main__":
    main()