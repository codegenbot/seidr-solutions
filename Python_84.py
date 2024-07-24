def solve():
    N = int(input("Enter a number: "))
    if N < 1:
        return "Please enter a positive integer."
    return bin(N)[2:]