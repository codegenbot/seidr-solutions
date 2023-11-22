import sys

def probability_of_higher(n, m):
    return (n-1) / (n+m-2)

n = int(sys.stdin.readline().strip())
m = int(sys.stdin.readline().strip())
print(probability_of_higher(n, m))