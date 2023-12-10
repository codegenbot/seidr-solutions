def fuel_cost():
    fuel = list(map(int, input().split()))
    total_cost = sum([(x//3)-2 for x in fuel])
    return total_cost

print(fuel_cost())