def find_pair():
    target = int(input())
    nums = list(map(int, input().split()))
    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            if nums[i] + nums[j] == target:
                return str(nums[i]) + "\n" + str(nums[j])
    
print(find_pair())