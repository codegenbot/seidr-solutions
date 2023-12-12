
def fuel_cost(vec):
   return sum(max((x-2)//3, 0) for x in vec)