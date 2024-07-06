def fibfib(n: int):
    if n <= 0:
        return "Input should be a positive integer."
    elif n == 1:
        return 1
    elif n == 2:
        return 1
    else:

        def recur(n):
            if n <= 2:
                return 1
            return recur(n - 1) + recur(n - 2)

        return recur(n)