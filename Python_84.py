def solve():
    while True:
        choice = input(
            "Do you want to (1) Convert decimal to binary or (2) Convert binary to decimal? "
        )

        if choice in ["1", "2"]:
            break
        else:
            print("Invalid input. Please choose a number between 1 and 2.")

    if choice == "1":
        while True:
            try:
                N = int(input("Enter a number: "))
                print(bin(N)[2:])
                break
            except ValueError:
                print("That's not a valid number! Try again.")
    elif choice == "2":
        while True:
            try:
                N = input("Enter a binary number: ")
                print(int(N, 2))
                break
            except ValueError:
                print("That's not a valid binary number! Try again.")


if __name__ == "__main__":
    solve()