```
def getProbability():
    n = int(input())
    m = int(input())
    return (n-1) / (n*m - min(n,m))

print(getProbability())