def fuel_cost():
    fuel = input().split()
    total_cost = sum([(int(x)//3)-2 for x in fuel])
    return total_cost

print(fuel_cost())