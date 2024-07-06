def digit_sum(n):
    num_str = str(n)
    if len(num_str) > 1:
        return "Please enter a single digit."
    else:
        return sum(int(i) for i in num_str)


def main():
    while True:
        try:
            num = int(input("Enter a number: "))
            print(digit_sum(num))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")


if __name__ == "__main__":
    main()