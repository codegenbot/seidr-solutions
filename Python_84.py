def solve():
    while True:
        choice = int(
            input(
                "Do you want to (1) Convert decimal to binary or (2) Convert binary to decimal? "
            )
        )

        if choice in [1, 2]:
            break
        else:
            print("Invalid input. Please choose a number between 1 and 2.")

    while True:
        try:
            N = int(input("Enter a number: "))
            if choice == 1:
                print(bin(N)[2:])
            elif choice == 2:
                print(int(str(N), 2))
            break
        except ValueError:
            print("That's not a valid number! Try again.")


def main():
    solve()


if __name__ == "__main__":
    main()