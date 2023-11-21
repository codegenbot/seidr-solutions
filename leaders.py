def find_leaders(nums):
    leaders = []
    max_num = float("-inf")
    for num in nums[::-1]:
        if num >= max_num:
            max_num = num
            leaders.append(num)
    return leaders[::-1]


n = int(input())
nums = []
for _ in range(n):
    nums.append(int(input()))

result = find_leaders(nums)
for num in result:
    print(num)