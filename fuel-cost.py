def fuel_cost(nums):
    return sum((num // 3) - 2 for num in nums)


input_nums = input().split()
nums = [int(num) for num in input_nums]

print(fuel_cost(nums))