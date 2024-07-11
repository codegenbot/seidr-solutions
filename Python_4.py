numbers = list(map(float, input().split()))
result = sum(abs(x - sum(numbers) / len(numbers) for x in numbers) / len(numbers)
print(result)