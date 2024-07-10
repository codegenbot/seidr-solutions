import math


def check(num):
    for i in range(2, num + 1):
        if set(math.factorize(i)) == set(math.factorize(num)) and i != num:
            return str(i)
    return str(num)


num = int(input("Enter a number: "))
print(check(num))