def solve():
    N = int(input("Enter an integer: "))
    if N <= 0:
        return "Error"
    else:
        return "0b" + bin(N)[2:]