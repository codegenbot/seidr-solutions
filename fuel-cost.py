nums = list(map(int, input().split()))
print(sum(((num - 2) // 3) for num in nums))