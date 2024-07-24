def solve(N):
    total = 0
    for i in str(bin(N)[2:]):
        if int(i): total += int(i)
    if total % 2 == 1: return "odd"
    else: return "even"