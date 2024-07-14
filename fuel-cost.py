from ast import literal_eval

def fuel_cost(vector):
    return sum((x//3)-2 for x in vector)

vector = list(map(int, literal_eval(input("Enter a vector of positive integers (space separated): "))))
print(fuel_cost(vector))