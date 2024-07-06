```
def fibfib(n: int):
    if n <= 1:
        return n
    else:
        return fibfib(n-1) + fibfib(n-2)