
def fib4(n: int):
    if n < 0:
        raise ValueError("n must be non-negative")
    if n <= 3:
        return 0
    elif n == 4:
        return 2
    else:
        a, b, c, d = 0, 0, 2, 4
        for i in range(5, n + 1):
            a, b, c, d = b, c, d, a + b + c + d
        return a + b + c + d

def test_fib4():
    assert fib4(5) == 2