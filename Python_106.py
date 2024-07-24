```
import math


def factorial(x):
    if x == 0:
        return 1
    else:
        return x * factorial(x - 1)


def f(n):
    result = 1
    for i in range(1, n + 1):
        if i % 2 == 0:
            result *= math.factorial(i)
        else:
            result *= i
    return result


while True:
    try:
        num = int(input("Enter a number: "))
        if num <= 0:
            print("Please enter a positive integer.")
        else:
            print(f(num))
    except ValueError:
        print("Invalid input. Please enter an integer.")