```
def fibfib(n: int):
    if n <= 1:
        return 0
    F = [[1, 1], [1, 0]]
    if n == 2:
        return 1
    power(F, n - 1)
    return F[0][0]

def multiply(F, M):
    x = F[0][0] * M[0][0] + F[0][1] * M[1][0]
    y = F[0][0] * M[0][1] + F[0][1] * M[1][1]
    z = F[1][0] * M[0][0] + F[1][1] * M[1][0]
    w = F[1][0] * M[0][1] + F[1][1] * M[1][1]
    F[0][0], F[0][1], F[1][0], F[1][1] = x, y, z, w

def power(F, n):
    if (n % 2 == 0):
        M = [[1, 1], [1, 0]]
        power(F, n // 2)
        multiply(F, F)
    else:
        M = [[1, 1], [1, 0]]
        power(F, n // 2)
        multiply(F, F)
        multiply(F, [[1, 1], [1, 0]])