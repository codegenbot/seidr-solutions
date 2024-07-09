```
def fuel_cost(vector):
    if not vector:  
        return 0  
    return sum(((i//1)//3)-2 for i in vector)