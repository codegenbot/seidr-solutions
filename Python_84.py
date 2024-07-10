def solve(N):
    if N == 0:
        return "0"
    if N < 0:
        return "-" + bin(abs(N))[2:]
    else:
        return bin(N)[2:].lstrip("0").lstrip(" ") or "0"