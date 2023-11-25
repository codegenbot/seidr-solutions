nums = []

for line in sys.stdin:
    nums.append(int(line))

result = sum((num // 3 - 2) for num in nums)
print(result)