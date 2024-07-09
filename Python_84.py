def solve(N):
    total_sum = sum(int(i) for i in bin(N)[2:].replace(" ", ""))

    return "{0:b}".format(total_sum).zfill(len(str(10000)))