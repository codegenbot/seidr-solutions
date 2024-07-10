import math

def check(factorized_num):
    for i in range(2, factorized_num + 1):
        if set(math.factorize(i)) == set(factorized_num) and i != factorized_num:
            return str(i)
    return "No such number exists"