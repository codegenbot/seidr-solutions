def find_leaders(nums):
    leaders = []
    max_num = float('-inf')
    for num in reversed(nums):
        if num >= max_num:
            leaders.append(num)
            max_num = num
    return leaders

n = int(input())
nums = []
for _ in range(n):
    nums.append(int(input()))

result = find_leaders(nums)
print(len(result))
for num in result:
    print(num)