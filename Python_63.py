def fibfib(n: int):
    if n <= 1:
        return [0]
    elif n == 2:
        return [0, 1]
    else:
        a, b = 0, 1
        result = [0, 1]
        for _ in range(2, n-1):
            a, b = b, a+b
            result.append(b)
        return result