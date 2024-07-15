```
def find_pair(n, nums):
    seen = set()
    for num in nums:
        if num * 2 == n:
            return str(num)
        elif n - num in seen:
            return '{} {}'.format(n - num, num)
        else:
            seen.add(num)

n = int(input())
print(find_pair(n, [int(x) for x in input().split()]))