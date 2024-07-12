def rounded_avg(n=None, m=None):
    if n is None:
        n = int(input("Enter first number: "))
    if m is None:
        m = int(input("Enter second number: "))
    if n > m:
        return -1
    avg = round((n + m) / 2.0)
    return bin(avg)[2:]