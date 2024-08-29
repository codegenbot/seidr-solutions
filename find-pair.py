def find_pair(n, nums):
    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            if nums[i] + nums[j] == n:
                return str(nums[i]) + "\n" + str(nums[j])


n = int(input())
print(find_pair(n, [int(x) for x in input().split()]))