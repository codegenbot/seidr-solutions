def find_pair(n, nums):
    seen = set()
    for num in nums:
        remaining = n - num
        if remaining in seen:
            return f"{num} {remaining}"
        seen.add(num)
    return "No pair found"

n = int(input())
print(find_pair(n, [int(x) for x in input().split()]))