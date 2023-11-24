def fuel_cost():
    n = int(input())
    total = 0
    for _ in range(n):
        num = int(input())
        new_num = num // 3 - 2
        total += new_num
    return total

print(fuel_cost())