```
def fuel_cost(vector):
    return sum(i-2 if i%3==0 else (i//3)-2 for i in vector)