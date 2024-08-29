def find_pair(target):
    nums = [int(num) for num in input().split()]
    num_set = set()
    for num in nums:
        complement = target - num
        if complement in num_set:
            return "{} {}".format(complement, num)
        num_set.add(num)

print(find_pair(int(input())))