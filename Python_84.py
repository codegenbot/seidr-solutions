def solve(N):
    if not isinstance(N, int):
        return "Invalid input"
    if N == 0:
        return "0"
    if N < 0:
        return "-" + bin(abs(N))[2:]
    else:
        return bin(N)[2:]