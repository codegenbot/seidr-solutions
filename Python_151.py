```
def check(f):
    result = f([int(i) for i in input("Enter numbers separated by space: ").split()])
    print(result)

check(lambda lst: sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0))