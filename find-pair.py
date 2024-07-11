```
n = int(input())
nums = [int(x) for x in input().split()]

def find_pair(target, nums):
    seen = set()
    for num in nums:
        if (target - num) in seen:
            return f"{target - num} {num}"
        seen.add(num)
    return "No pair found"

print(find_pair(n, nums))