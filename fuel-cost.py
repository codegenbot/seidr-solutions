import math

def fuel_cost():
    n = int(input())
    nums = []
    for i in range(n):
        num = int(input())
        new_num = math.floor(num/3) - 2
        nums.append(new_num)
    return sum(nums)

fuel_cost()