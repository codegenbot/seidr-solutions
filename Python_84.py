```
def solve(K=None):
    N = int(input("Enter a number: "))
    if K is None:
        return bin(N)[2:]
    else:
        return str(K * ((N - 1) // K))