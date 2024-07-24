```
def solve(K=None):
    if K is None:
        N = int(input("Enter another number: "))
    else:
        N = K
    if N < 1:
        return '0'
    binary = ''
    while N > 0:
        binary = str(N % 2) + binary
        N //= 2
    return binary