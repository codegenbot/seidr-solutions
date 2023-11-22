def find_pair(nums, target):
    seen = {}
    for num in nums:
        complement = target - num
        if complement in seen:
            return complement, num
        seen[num] = True
    return None


# Read the input
n = int(input())
nums = list(map(int, input().split()))
target = int(input())

# Find the pair
pair = find_pair(nums, target)

# Print the result
print(pair[0])
print(pair[1])