```
def fuel_cost(vector):
    return sum((x//3)-2 for x in vector)

vector = [int(x) for x in input("Enter a vector of positive integers (space separated): ").split() if x.isdigit()]
print(fuel_cost(vector))