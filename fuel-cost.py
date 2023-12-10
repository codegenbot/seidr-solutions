def fuel_cost():
    n = int(input())
    fuel = []
    for _ in range(n):
        fuel.append(int(input()))
    total_cost = sum([(x//3)-2 for x in fuel])
    return total_cost

print(fuel_cost())