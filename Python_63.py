def fibfib(n: int):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    else:
        a, b = 0, 1
        result = 1
        while True:
            a, b = b, a+b
            if len(str(b)) >= len(str(n)):
                break
        return b