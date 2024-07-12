n = int(input())
nums = [int(input()) for _ in range(n)]
result = sum(max(0, num // 3 - 2) for num in nums)
print(result)