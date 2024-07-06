```
def solve(N):
    binary = str(bin(N)[2:]).replace("1", "a").replace("0", "b")
    return ''.join('a' if c == 'b' else 'b' for c in binary)