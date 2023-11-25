nums = []
for i in range(2):
    nums.append(int(input()))
    
result = sum([max(0, n//3 - 2) for n in nums])
print(result)