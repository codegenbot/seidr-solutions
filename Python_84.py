def solve(N=None):
    while True:
        if N is None:
            N = int(input("Enter an integer (0 to stop): "))
        if N < 0:
            break
        print("0b" + bin(N)[2:])