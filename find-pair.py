def find_pair(nums):
    num_set = set()
    for num in nums[1:]:
        complement = target - num
        if complement in num_set:
            return str(num) + "\n" + str(complement)
        num_set.add(num)
    return "No pair found"