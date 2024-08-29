def find_pair(n, nums):
    seen = set()
    for num in nums:
        target = n - num
        if target in seen:
            return str(num) + "\n" + str(target)
        seen.add(num)
    return "No pair found"


n = int(input())
nums = list(map(int, input().split()))
print(find_pair(n, nums))