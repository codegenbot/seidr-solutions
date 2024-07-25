import sys

# Accept input from the standard input stream
sys.stdin = open(0)

def add(a, b):
    return a + b

x = int(input("Enter first number: "))
y = int(input("Enter second number: "))
result = add(x, y)
print(result)