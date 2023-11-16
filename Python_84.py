def check(solve):
    assert solve(963) == "10010", "Error"


def solve(x):
    return bin(x)[2:]


check(solve)
