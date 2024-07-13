Here is the Python solution for the problem:

def fuel_cost(fuel_integers):
    return sum((i//3)-2 for i in fuel_integers)