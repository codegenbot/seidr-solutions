def solve(N):
    return "0b" + format(N, 'b').zfill(len(str(N)))