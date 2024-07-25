def main():
    N = None
    while True:
        if N is None:
            try:
                N = int(input("Enter an integer (0 or less to stop): "))
                if N <= 0:
                    break
                print(bin(N)[2:])
            except ValueError:
                print("Invalid input. Please enter an integer.")
        else:
            return

    print(solve())


def solve():
    total = 0
    while True:
        try:
            N = int(input("Enter an integer (0 or less to stop): "))
            if N <= 0:
                break
            total += N
        except ValueError:
            print("Invalid input. Please enter an integer.")
    return bin(total)[2:]


if __name__ == "__main__":
    main()