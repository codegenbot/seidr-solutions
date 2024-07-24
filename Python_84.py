def solve(K=None):
    K = int(input("Enter a number: ") if K is None else K)
    N = int(input("Enter another number: ") if not isinstance(K, int) else 0)
    N = int(N)  
    if N < 1:
        return str(0)
    return str(K * ((N - 1) // K))