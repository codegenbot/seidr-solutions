def solve(N):
    if N == 0:
        return "0"
    s = bin(N)[2:]
    odd_sum = sum(int(i) for i in s if int(i) % 2)
    return bin(odd_sum)[2:]