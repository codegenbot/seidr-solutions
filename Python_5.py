from more_itertools import intersperse

numbers = list(map(int, input().split()))
delimiter = input()
result = delimiter.join(map(str, intersperse(numbers, delimiter)))
print(result)