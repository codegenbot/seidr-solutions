import sys

def probability_of_higher(n, m):
    return float(n-1) / float(n+m-2)

n = int(sys.stdin.readline().strip())
m = int(sys.stdin.readline().strip())
print(probability_of_higher(n, m))