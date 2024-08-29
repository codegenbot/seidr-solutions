```
def find_pair(target):
    n = int(input())
    nums = list(map(int, input().split()))
    for i in range(n):
        for j in range(i+1, n):
            if nums[i] + nums[j] == target:
                return str(nums[i]) + '\n' + str(nums[j])

print(find_pair(int(input())))