def solve(N):
    total_sum = sum(int(bit) for bit in bin(N)[2:].replace('0b', '')) 
    return format(total_sum, 'b')