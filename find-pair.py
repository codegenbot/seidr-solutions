n = int(input())
nums = list(map(int, input().split()))
target = int(input())

for i in range(n):
    for j in range(i + 1, n):
        if nums[i] + nums[j] == target:
            print(nums[i])
            print(nums[j])
            break