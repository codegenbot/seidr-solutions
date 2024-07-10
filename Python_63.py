def fibfib(n: int):
    if n <= 1:
        return str(0)
    elif n % 2 == 0:
        a, b = 0, 1
        result = [a]
        while b * b < n:
            a, b = b, a+b
            result.append(a)
        return str(result)
    else:
        print(fibfib(n-1) + " " + fibfib(n-2))