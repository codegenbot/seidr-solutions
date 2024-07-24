Here is the Python solution:

def roll_higher(n, m):
    if n > m:
        return 1 - (m / (n + m))
    else:
        return 1 - (n / (n + m))