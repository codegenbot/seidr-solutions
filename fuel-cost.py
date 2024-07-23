def fuel_cost(nums):
    return sum((num//3-2) for num in nums)

print(fuel_cost(tuple(map(int, input("Enter space-separated positive integers:").split()))))