nums = []
for _ in range(2):
    nums.append(int(input()))

result = sum([math.floor(num/3) - 2 for num in nums])
print(result)