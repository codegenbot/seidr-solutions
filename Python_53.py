import sys


def get_input():
    return int(sys.stdin.readline())


x = get_input()
y = get_input()
result = add(x, y)
print("Result:", result)