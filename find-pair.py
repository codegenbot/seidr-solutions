def find_pair():
    n = int(input())
    nums = [int(x) for x in input().split()]
    target = int(input())
    num_dict = {}
    for i in range(len(nums)):
        if target - nums[i] in num_dict:
            print(f"{target - nums[i]} {nums[i]}")
        else:
            num_dict[nums[i]] = i


find_pair()