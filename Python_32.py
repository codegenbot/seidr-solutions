import sys

def find_zero(xs: list) -> float:
    a = xs[0]
    b = xs[1]
    if a == 0:
        return "undefined"
    return -b / a

xs = list(map(float, sys.stdin.readline().rstrip().split()))
result = find_zero(xs)
print(result)