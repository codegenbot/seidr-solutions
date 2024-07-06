def solve():
    N = int(input("Enter a number: "))
    return bin(sum(int(i) for i in str(bin(N)[2:])))