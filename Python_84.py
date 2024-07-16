def solve(N):
    if N == 0:
        return "0"
    if N < 0:
        return "-" + solve(-N)
    elif type(N) != int:
        return 
    else:
        s = bin(abs(N))[2:]
        return "0" if s == "1" else s