Here is the Python code to solve the problem:

def fuel_cost(fuel_list):
    return sum((n//3-2) for n in fuel_list)