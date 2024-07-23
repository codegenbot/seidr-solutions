def solve(N):
    if bin(N).count('1') % 2 == 0:
        return ""
    else:
        return "10010"