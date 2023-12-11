import sys

def probability_higher(n, m):
    return (n - 1) / (n * m)

n = int(sys.stdin.readline().strip())
m = int(sys.stdin.readline().strip())
print(probability_higher(n, m))