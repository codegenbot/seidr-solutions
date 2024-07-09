```
def roll_higher(n, m):
    return sum((1/n) * (n-i)/(m) for i in range(1,n)) / (n*m)