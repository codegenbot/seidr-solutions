def solve():
    N = int(input("Enter a positive integer: "))
    if N > 1:
        return bin(N)[2:] or "1"
    else:
        return "0b1"

print(solve())