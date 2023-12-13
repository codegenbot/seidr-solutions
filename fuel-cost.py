nums = list(map(int, input().split())) 
total = sum(num // 3 for num in nums) 
print(total)