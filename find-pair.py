```
def find_pair(target, nums):
    seen = set()
    for num in nums:
        if (target - num) in seen:
            return f"{target - num} {num}"
        seen.add(num)
    return "No pair found"

n = int(input())
print(find_pair(n, [int(x) for x in input().split()]))