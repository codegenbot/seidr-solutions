def solve(N):
    s = format(N, 'b').zfill(len(str(bin(N)[2:]))).lstrip("0")
    return "0" if s == "" else s