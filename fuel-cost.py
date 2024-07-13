nums = list(map(int, input().split()))
print(sum(max(num // 3 - 2, 0) for num in nums))