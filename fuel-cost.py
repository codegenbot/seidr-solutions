Here is the completed Python code:

def fuel_cost(lst):
    return sum((i//3-2) for i in lst)

print(fuel_cost([1]))  # Example 1
print(fuel_cost([7]))  # Example 2
print(fuel_cost([8]))  # Example 3
print(fuel_cost([9]))  # Example 4
print(fuel_cost([10]))  # Example 5