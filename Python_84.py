```
def solve(N):
    if N == 0:
        return "0"
    if N < 0:
        return "-" + solve(-N)
    elif type(N) != int:
        return 
    else:
        s = format(abs(N), 'b').zfill(len(str(bin(abs(N))[2:]))).lstrip("0")
        return s if s == "0" else "1" + s