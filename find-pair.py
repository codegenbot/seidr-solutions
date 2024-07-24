```
def find_pair(n, nums):
    seen = set()
    for num in nums:
        target = n - num
        if target in seen:
            return str(num) + "\n" + str(target)
        seen.add(num)

nums_str = input().split()
n = int(input())
target = int(input())

print(find_pair(n, [int(x) for x in nums_str], target))