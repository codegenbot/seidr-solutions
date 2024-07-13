def find_pair(target):
    n = int(input())
    nums = [int(x) for x in input().split()]
    seen = set()
    for num in nums:
        remaining = target - num
        if remaining in seen:
            return str(num) + "\n" + str(remaining)
        seen.add(num)


print(find_pair(int(input())))