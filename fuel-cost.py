n = int(input())
total = 0
nums = list(map(int, input().split()))
for num in nums:
    total += max(num // 3 - 2, 0)
print(total)