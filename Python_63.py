def fibfib(n: int):
    if n <= 1:
        return str(n)
    elif n % 2 == 0:
        a, b = 0, 1
        result = [str(a)]
        while b * b < n:
            a, b = b, a + b
            result.append(str(a))
        return " -> ".join(map(str, result))
    else:
        if n % 3 == 1 or n % 2 == 1:
            return str(fibfib(int((n * 289 + 66)) // 233) - 1) if n > 0 else "0"
        elif n % 3 == 2:
            return str(-fibfib((-n) * 289 + 66) // 233 - 1)