import math


def check(num):
    for i in range(2, num + 1):
        if set(math.factorize(i)) == set(math.factorize(num)) and i != num:
            return str(i)
    if num > 1:
        return "It's a prime number"
    else:
        return str(num)


num = int(input("Enter a number: "))
print(check(num))