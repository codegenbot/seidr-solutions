def solve(N):
    total_sum = sum(int(i) for i in bin(N)[2:].replace("0b", ""))
    return format(total_sum, "b")