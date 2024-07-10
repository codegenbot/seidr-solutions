```
def factorize(num):
    i = 2
    factors = set()
    while i * i <= num:
        if num % i:
            i += 1
        else:
            num //= i
            while num % i == 0:
                num //= i
                factors.add(i)
    if num > 1:
        factors.add(num)
    return factors

def check(factorized_num):
    for i in range(2, factorized_num + 1):
        if set(factorize(i)) == set(factorized_num) and i != factorized_num:
            return str(i)
    return "No such number exists"

num = 32
print(check(num))