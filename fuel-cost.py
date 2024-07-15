nums = list(map(int, input().split()))
print(sum(max(0, (num - 2) // 3) for num in nums))