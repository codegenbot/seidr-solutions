import math


def fuel_cost(vector):
    return sum(math.floor(i // 3) - 2 for i in vector)


vector = input("Enter the vector of positive integers (space separated): ")
vector = [int(x) for x in vector.split()]
while len([x for x in vector if x <= 0]) > 0:
    print("Invalid input! Please enter a vector of positive integers.")
    vector = input("Enter the vector of positive integers (space separated): ")
    vector = [int(x) for x in vector.split()]

print(fuel_cost(vector))