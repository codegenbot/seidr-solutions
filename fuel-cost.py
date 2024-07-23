```
def fuel_cost(fuel):
    return sum((i//3)-2 for i in (int(x) for x in input().split()))