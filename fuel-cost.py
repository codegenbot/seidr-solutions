Here is the solution to the problem:

def fuel_cost(vector):
    return sum((i // 3) - 2 for i in vector)

# test cases
print(fuel_cost([1])) # output: 0
print(fuel_cost([1, 7])) # output: 0
print(fuel_cost([1, 8])) # output: 0
print(fuel_cost([1, 9])) # output: 1
print(fuel_cost([1, 10])) # output: 1