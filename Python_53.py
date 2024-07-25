import sys
def add(x, y):
    return x + y

x, y = map(int, sys.stdin.readline().split())
result = add(x, y)
print(result)