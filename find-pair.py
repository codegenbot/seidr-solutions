def find_pair(nums):
    num_dict = {}
    for num in nums[1:]:
        complement = target - num
        if complement in num_dict:
            return str(num) + "\n" + str(complement)
        num_dict[num] = True
    return "No two sum up to the target value."


target = int(input())
nums = [int(x) for x in input().split()]
print(find_pair([len(nums), *map(int, nums)]))