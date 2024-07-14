def find_pair():
    n = int(input())
    nums = [int(x) for x in input().split()]
    target = int(input())
    num_dict = {}
    for i in range(n):
        complement = target - nums[i]
        if complement in num_dict:
            print(complement, nums[i])
            return
        num_dict[nums[i]] = i


find_pair()