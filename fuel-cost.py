def fuel_cost():
    n = int(input())
    nums = []
    for _ in range(n):
        nums.append(int(input()))
    
    total = 0
    for num in nums:
        total += (num // 3) - 2
    
    return total

print(fuel_cost())