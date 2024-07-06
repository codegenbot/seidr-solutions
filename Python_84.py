```
def solve():
    N = int(input("Enter a number: "))
    return bin(int(bin(N)[2:], 2))[2:]