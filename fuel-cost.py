def fuel_cost(vec):
    return sum((x-2)//3 for x in vec)

OR

def fuel_cost(vec):
    return sum(int(x/3) - 2 for x in vec)