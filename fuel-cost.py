nums = []
n = int(input())
for _ in range(n):
    nums.append(int(input()))

total = 0
for num in nums:
    total += num // 3 - 2

print(total)