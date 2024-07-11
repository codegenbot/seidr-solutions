def fibfib(n: int):
    if n <= 1:
        return n
    else:
        a, b = 0, 1
        result = []
        for _ in range(2, n+2): 
            result.append(b)
            a, b = b, a+b
        return sum(int(x) for x in str(result[-1]))