def find_pair(n):
    nums = [int(x) for x in input().split()]
    target = int(input())
    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            if nums[i] + nums[j] == target:
                return "\n".join(map(str, [nums[i], nums[j]]))


print(find_pair(int(input())))