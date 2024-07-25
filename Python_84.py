def solve(N):
    while True:
        N = int(input("Enter an integer: "))
        if N <= 0:
            break
        else:
            print("0b" + bin(N)[2:])