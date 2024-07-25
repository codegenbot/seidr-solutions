```
def solve(N): 
    if N <= 0:
        return "Error"
    else: 
        return "0b" + bin(N)[2:]