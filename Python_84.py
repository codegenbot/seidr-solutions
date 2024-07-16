def solve(N):
    if N == 0:
        return "0"
    s = str(abs(N))  
    return ''.join('1' if int(i) % 2 else '0' for i in s)