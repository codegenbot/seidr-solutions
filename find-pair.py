```
def find_pair(n, nums):
    num_set = set()
    for num in nums:
        complement = n - num
        if complement in num_set:
            return f"{complement} {num}"
        num_set.add(num)
    return f"{n} not found"

n = int(input())
print(find_pair(n, [int(x) for x in input().split()]))