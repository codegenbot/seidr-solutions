n = int(input())
nums = [int(x) for x in input().split()]
target = int(input())

for i in range(n):
    for j in range(i + 1, n):
        if nums[i] + nums[j] == target:
            print(nums[i])
            print(nums[j])