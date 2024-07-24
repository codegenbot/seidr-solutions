def find_pair(n, nums, target):
    seen = set()
    for num in nums:
        if target - num in seen:
            return str(num) + "\n" + str(target - num)
        seen.add(num)


print(find_pair(int(input()), [int(x) for x in input().split()], int(input())))