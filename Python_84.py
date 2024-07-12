def solve(N):
    try:
        N = int(bin(int(str(N), 2))[2:].replace("1", "10"))
    except ValueError:
        return str(N).replace("1", "10")
    if N > 1:
        return str(N).replace("1", "10")
    else:
        return str(N)