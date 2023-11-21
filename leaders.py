def find_leaders(nums):
  leaders = []
  max_num = float("-inf")
  
  for num in nums[::-1]:
    if num >= max_num:
      max_num = num
      leaders.append(num)
      
  return leaders[::-1]

nums = list(map(int, input().split()))
result = find_leaders(nums)
print("\n".join(map(str, result)))