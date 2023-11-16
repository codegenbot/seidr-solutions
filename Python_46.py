

def fib4(n: int):
    """The Fib4 number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
    fib4(0) -> 0
    fib4(1) -> 0
    fib4(2) -> 2
    fib4(3) -> 0
    fib4(n) -> fib4(n-1) + fib4(n-2) + fib4(n-3) + fib4(n-4).
    Please write a function to efficiently compute the n-th element of the fib4 number sequence.  Do not use recursion.
    >>> fib4(5)
    4
    >>> fib4(6)
    8
    >>> fib4(7)
    14
    if n<=0: return 0
    Q,P=[0]*max(4,n),[0]*max(4,n)
    Q[0],P[0],P[1],P[2],P[3]=0,0,0,2,0
    for i in range(4,n):
        Q[i]=P[i-1]+P[i-2]+P[i-3]+P[i-4]
    return Q[n-1]
    """
