```
def find_pair(n, nums):
    seen = set()
    for num in nums:
        if (n - num) in seen:
            return f"{n - num} {num}"
        seen.add(num)
    return "No pair found"

n = int(input())
print(find_pair(n, [int(x) for x in input().split()]))