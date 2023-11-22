def fib4(n: int) -> int:
    if n <= 0:
        return 0
    if n == 1:
        return 1

    prev, curr = 0, 1
    for _ in range(2, n + 1):
        next_val = prev + curr
        prev, curr = curr, next_val

    return curr