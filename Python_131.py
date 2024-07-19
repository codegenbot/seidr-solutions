from functools import reduce

n = int(input())
result = reduce(lambda x, y: x * y, (int(d) for d in str(n)), 1)
print(result)