def fuel_cost(vector):
    return sum([int(x/3)-2 for x in vector])

vector = []
n = int(input())
for i in range(n):
    x = int(input())
    vector.append(x)

result = fuel_cost(vector)
print(result)