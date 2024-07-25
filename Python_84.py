def solve(N=None):
    if N is None:
        while True:
            N = int(input("Enter an integer (0 to stop): "))
            if N < 0:
                break
    return "0b" + bin(N)[2:]