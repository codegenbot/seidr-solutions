nums = map(int, input().split())
print(sum(max(0, num // 3 - 2) for num in nums))