def find_pair(n):
    nums = [int(x) for x in input().split()]
    target = int(input())
    num_dict = {}
    for num in nums:
        if target - num in num_dict:
            return "{} {}".format(target - num, num)
        num_dict[num] = True
    return "No pair found"


n = int(input())
print(find_pair(n))