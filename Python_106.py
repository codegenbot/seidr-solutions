```
import math

def factorial(x):
    return math.factorial(x)

if __name__ == '__main__':
    def f(n):
        result = []
        for i in range(1, n+1):
            if i % 2 == 0:
                result.append(factorial(i))
            else:
                result.append(sum(range(1, i+1)))
        return result

    num = int(input("Enter a number: "))
    print(f(num)[0])