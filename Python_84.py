def solve(N):
    total_sum = sum(int(b) for b in bin(N)[2:].replace("0b", ""))
    return format(total_sum, "b")