nums = [int(num) for num in input().split()]  
result = sum((num - 2) // 3 for num in nums)  
print(result)  