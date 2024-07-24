def solve(K=None):
    if K is None:
        N = int(input("Enter another number: "))
        binary = ''
        while N > 0:
            binary = str(N % 2) + binary
            N //= 2
        return binary
    N = int(input("Enter a number: ") if K is None else K)
    if N < 1:
        return '0'
    return str(K * ((N - 1) // K))