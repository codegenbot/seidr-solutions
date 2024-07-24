```
def solve(K=None):
    if K is None:
        K = int(input("Enter a number: "))
    if N is None:
        N = int(input("Enter another number: "))
    if N < 1:
        return str(0)
    return str(K * ((N - 1) // K))