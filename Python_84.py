def solve(K=None):
    if K is None:
        N = int(input("Enter another number: "))
        return ''.join('1' if i % (2**k) < 2**(k-1) else '0' for k in range(1, N.bit_length()+1))
    K = int(input("Enter a number: ") if K is None else K)
    N = int(input("Enter another number: ") if not isinstance(K, int) else 0)
    N = int(N)  
    if N < 1:
        return str(0)
    return str(K * ((N - 1) // K))