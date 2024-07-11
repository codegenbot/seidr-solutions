```
def digits(n):
    n = str(abs(n))
    result = ''
    for i in range(len(n) - 1, -1, -1):
        if n[i] != "0":
            result += n[i]
    return int(result) if result else 1