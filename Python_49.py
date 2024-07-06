def check(func):
    return func(5, 2)

print(check(lambda a, b: a % b))