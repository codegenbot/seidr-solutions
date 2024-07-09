xs = list(map(int, input().split()))

def find_zero(xs: list):
    assert len(xs) % 2 == 0
    assert any(xs)
    for i in range(len(xs) - 1, -1, -1):
        if xs[i] != 0:
            return -xs[i - 1] / xs[i]