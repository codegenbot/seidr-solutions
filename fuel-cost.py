def fuel_cost(vector):
    return sum((x//3)-2 for x in vector)

vector = []
n = int(input())
for _ in range(n):
    vector.append(int(input()))

result = fuel_cost(vector)
print(result)