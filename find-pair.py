```
def find_pair(n, nums):
    seen = set()
    for num in nums:
        complement = n - num
        if complement in seen:
            return f"{num} {complement}"
        seen.add(num)
    return f"{n} not found"

n = int(input())
print(find_pair(n, [int(x) for x in input().split()]))