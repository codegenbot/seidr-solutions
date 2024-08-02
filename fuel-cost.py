n = int(input())
nums = [int(input()) for _ in range(n)]

total = sum((num // 3) - 2 for num in nums)
print(total)