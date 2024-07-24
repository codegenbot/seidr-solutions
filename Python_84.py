def solve(N=None):
    if N is None:
        N = int(input("Enter a number: "))
    if N < 1:
        return 
    return bin(N)[2:]