input_data = list(map(int, input().split()))
result = sum([(x // 3) - 2 for x in input_data])
print(result)