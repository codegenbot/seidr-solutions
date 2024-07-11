def digits(n):
    n = str(abs(n))
    for i in range(len(n) - 1, -1, -1):
        if n[i] != "0":
            return int(n[i])
    return 1