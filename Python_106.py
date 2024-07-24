import math

def factorial(x):
    if x == 0:
        return 1
    else:
        return x * factorial(x-1)

def f(n, x):
    result = []
    for i in range(1, n+1):
        if i % 2 == 0:
            result.append(math.factorial(i))
        else:
            result.append(sum(range(1, i+1)))
    return result

while True:
    try:
        n = int(input("Enter a value of 'n': "))
        x = int(input("Enter the specific value of 'x' (less than or equal to 'n'): "))
        print(f(n, x))
    except ValueError:
        print("Invalid input. Please enter an integer.")