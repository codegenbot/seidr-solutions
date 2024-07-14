```
def fuel_cost(vector):
    return sum((x//3)-2 for x in vector)

vector = list(map(int, filter(lambda x: 0 < int(x), input("Enter a vector of positive integers (space separated): ").split())))
print(fuel_cost(vector))