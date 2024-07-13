def solve(N):
    total_sum = sum(
        int(i) for i in bin(N)[2:].translate({ord("0"): "0", ord("1"): "1"})
    )
    return format(total_sum, "b")