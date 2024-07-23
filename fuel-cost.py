```
def solve():
    nums = list(map(int, input().split()))
    return sum((x//3-2) for x in nums)