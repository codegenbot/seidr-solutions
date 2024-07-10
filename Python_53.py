x, y = map(int, input().strip().split())

def add(a, b):
    return a + b

try:
    result = add(x, y)
    print(result)
except ValueError:
    print("Please provide two integers separated by a space.")