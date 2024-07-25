def solve(N): 
    return "0b" + bin(sum(int(i) for i in str(N)[1:]))