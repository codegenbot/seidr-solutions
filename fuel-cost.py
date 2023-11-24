def fuel_cost(vector):
    return sum([(x - 2)//3 for x in vector])

input_str = input()
vector = list(map(int, input_str.split()))

result = fuel_cost(vector)
print(result)