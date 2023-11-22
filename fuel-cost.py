nums = list(map(int, input().split()))
print(sum((num + 1) // 3 for num in nums))