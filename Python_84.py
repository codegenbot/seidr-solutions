def solve(N):
    return bin(sum(int(x) for x in str(bin(N)[2:])))[2:].zfill(
        len(str(bin(N)[2:])).replace("b", "")
    )