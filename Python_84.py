def solve(N):
    ones = [int(i) for i in str(bin(N)[2:]) if i == "1"]
    return bin(sum(ones))[2:]