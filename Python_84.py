def solve(N):
    total_sum = 0
    for digit in str(N):
        total_sum += int(digit)
    return bin(total_sum)[2:].zfill(int("1" + bin(N)[2:], 2).bit_length())