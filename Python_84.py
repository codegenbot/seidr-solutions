def solve(N):
    if N == 1:
        return '0'
    else:
        res = ''
        for i in range(1, N+1):
            if i % 2 != 0:
                res += '1' if (N-1) % i == 0 else '0'
            else:
                res += '0'
        return res