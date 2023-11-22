def fuel_cost():
    n = int(input())
    cost = 0
    for _ in range(n):
        num = int(input())
        new_num = num // 3 - 2
        cost += new_num
    return cost

print(fuel_cost())