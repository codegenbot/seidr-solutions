def solve(N):
    if N > 0:
        s = bin(N)[2:] 
        return bin(int(s)) if s else "0"
    else:
        return "0"