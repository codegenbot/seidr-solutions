from functools import reduce

def digits(n):
    return reduce(lambda x, y: x*y, (int(d) for d in str(n) if int(d) % 2 != 0), 1)

n = int(input("Enter a number: "))
result = digits(n)
print(result)