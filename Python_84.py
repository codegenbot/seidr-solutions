def solve(N):
    for i in range(N):
        if N % i == 0:
            return False
    return True
