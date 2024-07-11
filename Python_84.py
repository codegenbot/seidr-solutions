def solve(N):
    total = sum(int(i) for i in str(bin(N)[2:]) if i == '1')
    return bin(total)[2:].rjust((total.bit_length()).bit_length(), '0').lstrip('0')