def find_pair(n, nums):
    seen = set()
    for num in nums:
        target = n - num
        if target in seen:
            return f"{num} {target}"
        seen.add(num)
    return "No pair found"

n = int(input())
print(find_pair(n, [int(x) for x in input().split()]))