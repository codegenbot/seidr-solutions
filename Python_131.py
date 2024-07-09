def digits(n):
    return sum(int(d) for d in str(n) if int(d) % 2 != 0)