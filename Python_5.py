numbers = list(map(int, input().split()))
delimiter = input()
result = delimiter.join(map(str, numbers))
print(result)