def solve(N):
    return (
        bin(sum(int(i) for i in str(bin(N)[2:])))[:1] + "0"
        if sum(int(i) for i in str(bin(N)[2:])) < 2
        else bin(sum(int(i) for i in str(bin(N)[2:])))[3:]
    )