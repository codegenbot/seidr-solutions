nums = list(map(int, input().split()))
result = sum(map(lambda x: max(0, (x - 2) // 3), nums))
print(result)