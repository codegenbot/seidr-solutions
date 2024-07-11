```
def find_pair(n, nums):
    num_dict = {}
    for i in range(len(nums)):
        complement = n - nums[i]
        if complement in num_dict:
            return f"{complement} {nums[i]}"
        else:
            num_dict[nums[i]] = True
    return "No pair found"

n = int(input())
print(find_pair(n, [int(x) for x in input().split()]))