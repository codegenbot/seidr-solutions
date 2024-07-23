```
def solve(N):
    return f"0{bin(N)[2:]}{f'0{bin(sum(int(digit) for digit in str(N)))[2:]}' if len(bin(sum(int(digit) for digit in str(N)))) == 3 else bin(sum(int(digit) for digit in str(N)))[2:]}".