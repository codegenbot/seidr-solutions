nums = []
for _ in range(2):
    nums.append(int(input()))

result = sum([max(0, num // 3 - 2) for num in nums])
print(result)