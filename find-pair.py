Here's the Python solution:

n = int(input())
nums = [int(num) for num in input().split()]
target_sum = int(input())

for i in range(n):
    for j in range(i + 1, n):
        if nums[i] + nums[j] == target_sum:
            print(nums[i])
            print(nums[j])