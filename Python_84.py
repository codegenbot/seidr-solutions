def solve(N):
    return format(int(bin(N).lstrip("0"), 2), "b")