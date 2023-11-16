

"""
The FibFib number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
    fibfib(0) == 0
    fibfib(1) == 0
    fibfib(2) == 1
    fibfib(n) == fibfib(n-1) + fibfib(n-2) + fibfib(n-3).
Please write a function to efficiently compute the n-th element of the fibfib number sequence.

"""


# solution

def fibfib(n: int):
    if n == 0 or n == 1:
        return 0
    if n == 2:
        return 1
    a = 0
    b = 0
    c = 1
    for i in range(3, n):
        d = a + b + c
        a = b
        b = c
        c = d
    return a + b + c


print(fibfib(8))  # 24
