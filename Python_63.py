def fibfib(n: int):
    if n <= 1:
        return n
    else:
        a, b = 0, 1
        for _ in range(2, n+2): 
            a, b = b, a+b
        return int(''.join(map(str, [a]))[-1])