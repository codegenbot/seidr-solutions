```
numbers = [int(x) for x in input().split(',')]
print(sum(map(lambda x: x ** 2, numbers)))