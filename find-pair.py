def find_pair(n, nums):
    seen = set()
    for num in nums:
        remaining = target - num
        if remaining in seen:
            return f"{num} {remaining}"
        seen.add(num)


print(find_pair(int(input()), [int(x) for x in input().split()]))