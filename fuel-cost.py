nums = list(map(int, input().split()))
result = sum([(num-2)//3 for num in nums])
print(result)