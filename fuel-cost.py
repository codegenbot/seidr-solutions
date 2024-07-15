input_list = list(map(int, input().split()))
result = sum([(num // 3 - 2) for num in input_list])
print(result)