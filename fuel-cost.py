def fuel_cost():
    nums = []
    for _ in range(2):
        nums.append(int(input()))
    new_nums = [(num // 3) - 2 for num in nums]
    return sum(new_nums)

print(fuel_cost())