def find_pair(n, nums):
    for i in range(n):
        for j in range(i + 1, n):
            if nums[i] + nums[j] == int(input()):
                return str(nums[i]) + "\n" + str(nums[j])