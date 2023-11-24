def fuel_cost(vector):
    vector = list(map(int, vector.split()))
    return sum([(x // 3) - 2 for x in vector])

input_str = input()
result = fuel_cost(input_str)
print(result)