def fuel_cost(): 
    return sum((int(i) // 3) - 2 for i in input().split()) 

print(fuel_cost())