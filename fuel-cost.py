numbers = list(map(int, input().split()))
results = [(num // 3 - 2) for num in numbers]
print(sum(results))