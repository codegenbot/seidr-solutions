```
def modp(a, b):
    return a % b

def check(func):
    return func(5,2)

print(check(modp)(5,2))