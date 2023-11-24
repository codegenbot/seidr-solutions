nums = []
for _ in range(int(input())):
    nums.append(int(input()))

fuel_cost = sum([(num // 3) - 2 for num in nums])
print(fuel_cost)