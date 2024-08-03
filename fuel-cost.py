nums = [int(input()) for _ in range(int(input()))]
result = sum((num // 3 - 2) for num in nums)
print(result)