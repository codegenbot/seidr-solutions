def fuel_cost(input_string):
    return sum((int(i) // 3) - 2 for i in input_string.split(',')) 

print(fuel_cost('2475,9345,8922,9391,6050'))