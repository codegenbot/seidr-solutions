def fuel_cost(vector):
    return sum([int(x/3)-2 for x in vector])

vector = []
while True:
    try:
        vector.append(int(input()))
    except EOFError:
        break

print(fuel_cost(vector))