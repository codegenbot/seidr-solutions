import math

n = int(input("Enter first number: "))
m = int(input("Enter second number: "))


def rounded_avg(n, m):
    avg = (math.ceil(n) + math.ceil(m)) / 2
    return str(avg)


print(rounded_avg(n, m))