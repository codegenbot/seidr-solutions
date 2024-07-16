```
def roll_higher(n, m):
    if n <= m: 
        return 0
    else:
        return 1 - (m/n)**m / (n*m)