Here is the completed code:

def fuel_cost(lst):
    return sum((i // 3) - 2 for i in lst)

print(fuel_cost([1])) 
print(fuel_cost([6]))
print(fuel_cost([1,7]))
print(fuel_cost([1,8]))
print(fuel_cost([1,9]))
print(fuel_cost([1,10]))