```Python
def digits(n):
    n = str(abs(n))[::-1]
    for i in range(len(n)):
        if n[i] != '0':
            return int(n[i])
    return 0