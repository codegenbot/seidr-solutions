def solve(N): 
    return bin(sum(int(i) for i in str(N)))[2:] if N > 0 else "0"