def find_pair(input_ints):
    n = int(input())
    nums = [int(x) for x in input().split()]
    target = int(input())
    for i in range(n - 1):
        for j in range(i + 1, n):
            if nums[i] + nums[j] == target:
                return str(nums[i]) + "\n" + str(nums[j])
    return "No pair found"