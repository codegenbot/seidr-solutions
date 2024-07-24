def find_pair(n, nums, target):
    seen = {}
    for i, num in enumerate(nums):
        complement = target - num
        if complement in seen:
            return str(num) + "\n" + str(complement)
        seen[num] = i


print(find_pair(int(input()), [int(x) for x in input().split()], int(input())))