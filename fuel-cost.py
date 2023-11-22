nums = list(map(int, input().split()))
print(sum(((num // 3) - 2) * (num >= 3) for num in nums))