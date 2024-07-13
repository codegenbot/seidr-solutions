```
import math

def fuel_cost(vector):
    return sum(math.floor(i // 3) - 2 for i in vector)

vector = input("Enter the vector of positive integers (space separated): ")
vector = list(map(int, vector.split()))
while any(i <= 0 for i in vector):
    print("Invalid input! Please enter a vector of positive integers.")
    vector = list(map(int, input("Enter the vector of positive integers (space separated): ").split())

print(fuel_cost(vector))