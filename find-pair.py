def find_pair(n, nums):
    seen = set()
    for num in nums:
        if (n - num) in seen:
            return str(n - num) + " " + str(num)
        seen.add(num)
    return "No pair found"

n = int(input())
print(find_pair(int(input()), [int(x) for x in input().split()]))