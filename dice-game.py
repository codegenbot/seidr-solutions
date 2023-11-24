n = int(input())
m = int(input())

def probability(n, m):
    return (n-1) / (n*m)

print(probability(n, m))