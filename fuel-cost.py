def fuel_cost(nums):
    return sum([x // 3 - 2 for x in nums])


# Read input from user
nums = [int(input()) for _ in range(int(input()))]

# Call the function and print the result
print(fuel_cost(nums))