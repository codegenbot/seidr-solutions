def find_pair(nums, target):
    complements = {}
    for num in nums:
        complement = target - num
        if complement in complements:
            return complement, num
        complements[num] = True

# Read input
n = int(input())
nums = list(map(int, input().split()))
target = int(input())

# Find pair
pair = find_pair(nums, target)

# Print output
print(pair[0])
print(pair[1])