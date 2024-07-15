nums = list(map(int, input().split()))
print(sum(num // 3 - 2 for num in nums))