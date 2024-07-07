def find_pair(n):
    nums = [int(num) for num in input().split()]
    target = int(input())
    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            if nums[i] + nums[j] == target:
                return "{}\n{}".format(nums[i], nums[j])


print(find_pair(int(input())))