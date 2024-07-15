numbers = list(map(int, input().split()))
sum_result = sum([(num // 3 - 2) for num in numbers])
print(sum_result)