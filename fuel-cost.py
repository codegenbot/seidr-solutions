```
def fuel_cost(fuels):
    return sum((x//3)-2 for x in fuels)