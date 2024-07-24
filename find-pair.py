```
def find_pair(n, nums, target):
    seen = set()
    for num in nums:
        if target - num in seen:
            return str(target - num) + "\n" + str(num)


print(find_pair(int(input()), [int(x) for x in input().split()], int(input())))