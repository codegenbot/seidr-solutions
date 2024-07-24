```Python
def solve(K=None):
    K = int(input("Enter a number: ") if K is None else K)
    N = int(input("Enter another number: "))
    return str(bin(K)[2:].zfill(N))