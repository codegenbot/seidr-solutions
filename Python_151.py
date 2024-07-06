```
def check(f):
    print(f([1, 2, 3]))

check(lambda x: sum(i**2 for i in x if isinstance(i, int) and i % 2 != 0))