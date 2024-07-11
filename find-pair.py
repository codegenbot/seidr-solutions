```
def find_pair(n, nums):
    seen = set()
    for num in nums:
        complement = n - num
        if complement in seen:
            return f"{complement} {num}"
        seen.add(num)
    return "No pair found"

n = int(input())
print(find_pair(n, [int(x) for x in input().split()]))