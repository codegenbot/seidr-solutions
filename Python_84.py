def solve(N):
    return str(bin(N))[2:].zfill(len(str(bin(N))[2:])) + bin(
        sum(int(digit) for digit in str(N))
    )[2:].zfill(len(bin(sum(int(digit) for digit in str(N)))[2:]))


print(solve(12345))