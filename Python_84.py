def solve(N):
    return bin(sum(int(digit) for digit in str(bin(N)[2:]))).split("0b")[-1]