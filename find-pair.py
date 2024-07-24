def find_pair(n, nums, target):
    seen = set()
    for num in nums:
        if target - num in seen:
            return str(target - num) + "\n" + str(num)

n = int(input())
nums = [int(x) for x in input().split()]
target = int(input())
print(find_pair(n, nums, target))