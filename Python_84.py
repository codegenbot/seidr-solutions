```
def solve(N):
    return ''.join(str((N // (10 ** i)) % 2) for i in range(len(str(N))).__reversed__())