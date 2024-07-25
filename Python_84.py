def solve(N):
    while True:
        N = int(input("Enter an integer: "))
        if N > 0:
            return "0b" + bin(N)[2:]
        elif N < 0:
            print("Please enter a non-negative integer.")