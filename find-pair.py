def find_pair(nums):
    num_dict = {}
    for num in nums[1:]:
        complement = target - num
        if complement in num_dict:
            return str(complement) + "\n" + str(num)
        num_dict[num] = True
    return "No pair found"


target = int(input())
print(find_pair([len(str(target)), *map(int, input().split()), int(input())]))