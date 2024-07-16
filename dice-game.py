import math
def roll_higher(n, m):
    if n <= m:
        return 0
    else:
        return (math.factorial(m-1))/pow(n*m,m-1)