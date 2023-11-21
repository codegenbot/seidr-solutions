n = int(input())
nums = []

for _ in range(n):
    num = int(input().split()[0])
    nums.append(num)

result = sum([num // 3 - 2 for num in nums])
print(result)