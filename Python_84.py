def solve(N):
    if N > 0:
        return "0" + bin(N)[2:] if not bin(N)[2:].lstrip("0") else bin(N)[2:]
    else:
        return ""