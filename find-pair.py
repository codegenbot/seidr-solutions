Here is the solution in Python:

def find_pair():
    n = int(input())
    nums = list(map(int, input().split()))
    target = int(input())
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return str(nums[i]) + '\n' + str(nums[j])

print(find_pair())