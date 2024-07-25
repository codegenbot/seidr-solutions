def solve():
    while True:
        N = int(input("Enter an integer (0 to stop): "))
        if N < 0:
            break
        print("0b" + bin(N)[2:])