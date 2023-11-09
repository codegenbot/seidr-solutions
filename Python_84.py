import math

def solve(N):
    a = math.log(N, 2)
    b = (math.ceil(a))
    c = 2 ** b
    d = c - N
    return d


if __name__ == '__main__':
    assert solve(963) == "10010", "Error"
