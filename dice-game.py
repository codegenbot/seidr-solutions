import sys

n = int(sys.stdin.readline().strip())
m = int(sys.stdin.readline().strip())

def probability_of_higher(n, m):
    return (n-1) / (n+m-2)

print(probability_of_higher(n, m))