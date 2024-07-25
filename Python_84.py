def solve(N):
    while True:
        N = int(input("Enter an integer: "))
        if N <= 0:
            return
        else:
            return "0b" + bin(N)[2:]