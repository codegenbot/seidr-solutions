Here is the fixed code:

def digits(n):
    if n < 0:
        return -1 * max(map(int, str(abs(n))))
    else:
        return max(map(int, str(abs(n))))