```
def solve(N):
    return "0b" + bin(sum(int(i) for i in str(bin(N)[2:])))[2:].zfill(len(str(bin(2**len(str(bin(N))[2:])-1)))[2:])