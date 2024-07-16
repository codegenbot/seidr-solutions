Here is the completed Python code:

def fuel_cost(v):
    return sum((i // 3) - 2 for i in v if i > 0)

# Example usage
input_vector = [1, 6]
print(fuel_cost(input_vector))