def find_pair(nums, target):
    num_set = set()
    for num in nums:
        complement = target - num
        if complement in num_set:
            return complement, num
        num_set.add(num)


# Read input from user
n = int(input())
nums = list(map(int, input().split()))
target = int(input())

# Call the function and print the output
result = find_pair(nums, target)
print(result[0])
print(result[1])