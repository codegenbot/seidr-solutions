def fuel_cost(vector):
    return sum([(x//3)-2 for x in vector])

input_list = []
for line in sys.stdin:
    input_list.append(int(line))
    
print(fuel_cost(input_list))