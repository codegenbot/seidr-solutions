def solve(N=None):
    while True:
        if N is None:
            while True:
                try:
                    N = int(input("Enter an integer (0 to stop): "))
                    break
                except ValueError:
                    print("Invalid input. Please enter a valid integer.")
        if N < 0:
            break
        print("0b" + bin(N)[2:])