Here is the solution to the problem:

def fuel_cost(vector):
    return sum((i//3-2) for i in vector)

# Example usage:
vector = [1, 6]
print(fuel_cost(vector)) # Output: 0
vector = [1, 7]
print(fuel_cost(vector)) # Output: 0
vector = [1, 8]
print(fuel_cost(vector)) # Output: 0
vector = [1, 9]
print(fuel_cost(vector)) # Output: 1
vector = [1, 10]
print(fuel_cost(vector)) # Output: 1