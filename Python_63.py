```
    def fibfib(n: int):
        if n <= 1:
            return 0
        elif n == 2:
            return 1
        else:
            a, b, c = 0, 0, 1
            for _ in range(3, n+1):
                c = (a + b) % 2
                a, b = b, c
            return c