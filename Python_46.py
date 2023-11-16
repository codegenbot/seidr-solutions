

def fibonacci(n: int):
    0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946
    """The Fib4 number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
    fib4(0) -> 0
    fib4(1) -> 0
    fib4(2) -> 2
    fib4(3) -> 0
    fib4(n) -> fib4(n-1) + fib4(n-2) + fib4(n-3) + fib4(n-4).
    Please write a function to efficiently compute the n-th element of the fib4 number sequence.  Do not use recursion.
    >>> fibonacci(5)
    4
    >>> fibonacci(6)
    8
    >>> fibonacci(7)
    14
    fib = []
    for i in range(n):
        if i == 0:
            fib.append(0)
        if i == 1:
            fib.append(1)
        elif i == 2:
            fib.append(1)
        else:
            fib.append(fib[i-1] + fib[i-2])
    return fib[-1]

def fibonacci_tail(n: int, a=0, b=1):
    """Write a recursive function that computes the n-th value of the Fibbonacci number series.  
    Where the 0-th fibonacci number is 0, and the 1st fibonacci number is 1 for n >=2 the n-th Fibonacci 
    number is the sum of the n-1 and n-2 Fibonacci numbers.  Use tail recursion to write a function
    that computes this number in a very efficient manner.
    >>> fibonacci_tail(5)
    5
    >>> fibonacci_tail(10)
    55
    >>> fibonacci_tail(30)
    832040
    >>> fibonacci_tail(100)
    354224848179261915075L
    """
    sum = a + b
    if n == 0:
        return 0
    if n == 1:
        return 1
    if n == 2:
        return sum
    else
        fibonacci_tail(n-1, a=b, b=sum)
    """
