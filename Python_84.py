def convert_to_binary(N):
    return bin(N)[2:]


def convert_from_binary(N):
    return oct(int(N, 2))[2:]


def main():
    while True:
        choice = int(
            input(
                "Do you want to (1) Convert decimal to binary or (2) Convert binary to decimal? "
            )
        )
        if choice == 1:
            N = int(input("Enter a number: "))
            print(convert_to_binary(N))
        elif choice == 2:
            N = input("Enter a binary number: ")
            print(convert_from_binary(N))
        else:
            break


print(main())