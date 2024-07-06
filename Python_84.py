def solve():
    while True:
        try:
            choice = int(
                input(
                    "Do you want to (1) Convert decimal to binary or (2) Convert binary to decimal? "
                )
            )
            if choice not in [1, 2]:
                raise ValueError
            break
        except ValueError:
            print("Invalid choice. Please choose 1 or 2.")

    if choice == 1:
        while True:
            try:
                N = int(input("Enter a number: "))
                print(bin(N)[2:])
                break
            except ValueError:
                print("Invalid input. Please enter a valid decimal number.")
    elif choice == 2:
        while True:
            try:
                N = input("Enter a binary number: ")
                print(int(N, 2))
                break
            except ValueError:
                print("Invalid input. Please enter a valid binary number.")


def main():
    solve()


if __name__ == "__main__":
    main()