def grayCode(N):
    if N == 0:
        return "0"
    if N == 1:
        return "0," "1"
    res = ["0"]
    for i in range(1, N + 1):
        res += list(map(lambda x: str(int(x, 2) ^ i), res))
    return ",".join(res)