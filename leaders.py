def find_leaders(nums):
    leaders = []
    max_num = 0
    for num in reversed(nums):
        if num >= max_num:
            leaders.append(num)
            max_num = num
    return list(reversed(leaders))

n = int(input())
nums = []
for _ in range(n):
    nums.append(int(input()))

result = find_leaders(nums)
for num in result:
    print(num)