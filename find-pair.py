```
def find_pair(nums):
    target = int(input())
    num_dict = {}
    for num in nums[1:]:
        complement = target - num
        if complement in num_dict:
            return str(complement) + '\n' + str(num)
        num_dict[num] = True
    return None