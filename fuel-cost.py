def fuel_cost(lst):
    return sum((i//3-2) for i in lst)

print(fuel_cost([1]))  
print(fuel_cost([7])) 
print(fuel_cost([8])) 
print(fuel_cost([9])) 
print(fuel_cost([10]))