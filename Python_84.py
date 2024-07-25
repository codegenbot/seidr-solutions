def solve(N):
    while True:
        N = int(input("Enter an integer: "))
        if 0 <= N:
            return "0b" + bin(N)[2:]
        else:
            print("Please enter a non-negative integer.")